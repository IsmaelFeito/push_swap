/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:38:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 00:01:05 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(s_stack **stack_a)
{
	s_stack *scnd_last;
	s_stack *last;

	if (!*stack_a || !(*stack_a)->next)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_a);
	scnd_last = last->prev;

	last->next = *stack_a;
	(*stack_a)->prev = last;
	scnd_last->next = NULL;
	*stack_a = last;
}

void rrb(s_stack **stack_b)
{
	s_stack *last;
	s_stack *scnd_lst;

	if (!*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_b);
	scnd_lst = last->prev;

	last->next = *stack_b;
	(*stack_b)->prev = last;
	scnd_lst->next = NULL;
	*stack_b = last;
}

void rrr(s_stack **stack_a, s_stack **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	rra(stack_a);
	rrb(stack_b);
}
