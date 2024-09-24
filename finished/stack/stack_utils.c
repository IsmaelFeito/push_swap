/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:01:06 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/24 13:51:48 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../push_swap.h"

t_list	*find_last_node(t_list *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	add_node_back(t_list **stack, t_list *new)
{
	t_list *enlace;

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

t_list	*new_node(long num)
{
	t_list *node;

	node = ft_calloc(1, sizeof(t_list));
	if (!node)
		return (NULL);
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
