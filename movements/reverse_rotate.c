/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:38:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/16 15:25:56 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_list **stack_a)
{
	t_list *scnd_last;
	t_list *last;

	if (!*stack_a || !(*stack_a)->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_a);
	scnd_last = last->prev;

	last->next = *stack_a;
	(*stack_a)->prev = last;
	scnd_last->next = NULL;
	*stack_a = last;
	ft_putstr_fd("rra", STDERR_FILENO);
}

void rrb(t_list **stack_b)
{
	t_list *last;
	t_list *scnd_lst;

	if (!*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_b);
	scnd_lst = last->prev;

	last->next = *stack_b;
	(*stack_b)->prev = last;
	scnd_lst->next = NULL;
	*stack_b = last;
	ft_putstr_fd("rrb", STDERR_FILENO);
}

void rrr(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	rra(stack_a);
	rrb(stack_b);
	ft_putstr_fd("rrr", STDERR_FILENO);
}
