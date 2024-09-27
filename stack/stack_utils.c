/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:01:06 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 00:38:12 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

t_stack	*find_last_node(t_stack *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	add_node_back(t_stack **stack, t_stack *new)
{
	t_stack *enlace;

	enlace = find_last_node(*stack);
	if (*stack != NULL)
	{
		new->prev = enlace;
		new->next = NULL;
		enlace->next = new;
	}
	else
		*stack = new;
}

t_stack	*new_node(long num)
{
	t_stack *node;
	//int	id;
	
	node = ft_calloc(1, sizeof(t_stack));
	if (!node)
		return (NULL);
	//node->id = id;
	node->num = num;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

long	ft_atoi_v2(const char *str)
{
	int i;
	long nbr;
	long sign;

	i = 0;
	while (str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
		if (str[i] == '+' || str[i] == '-')
			return (ft_putstr_fd("Error\n", STDERR_FILENO), 2147483648);
	}
	nbr = 0;
	if (!ft_isdigit(str[i]))
		ft_putstr_fd("Error\n", STDERR_FILENO);
	while (ft_isdigit(str[i]) && i < 12)
		nbr = (nbr * 10) + (str[i++] - '0');
	if (nbr > INT_MAX || nbr < INT_MIN)
		ft_putstr_fd("Error\n", STDERR_FILENO);
	return (nbr * sign);
}
