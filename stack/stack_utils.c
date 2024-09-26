/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:01:06 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:58:24 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

s_stack	*find_last_node(s_stack *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	add_node_back(s_stack **stack, s_stack *new)
{
	s_stack *enlace;

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

s_stack	*new_node(int id, long num)
{
	s_stack *node;

	node = ft_calloc(1, sizeof(s_stack));
	if (!node)
		return (NULL);
	node->id = id;
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
	while ((str[i] < 14 && str[i] > 8) || str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	nbr = 0;
	if (!ft_isdigit(str[i]))
		ft_putstr_fd("error\n", STDERR_FILENO);
	while (ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (nbr > INT_MAX || nbr < INT_MIN)
		ft_putstr_fd("error\n", STDERR_FILENO);
	return (nbr * sign);
}
