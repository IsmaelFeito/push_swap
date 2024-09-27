/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:24:20 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 00:01:05 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(s_stack **stack_a)
{
	s_stack *last;
	s_stack *first;

	if (!*stack_a || !(*stack_a)->next)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_a);
	first = *stack_a;

	*stack_a = first->next;
	last->next = first;
	first->next = NULL;
}

void rb(s_stack **stack_b)
{
	s_stack *last;
	s_stack *first;

	if (!*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_b);
	first = *stack_b;

	*stack_b = first->next;
	last->next = first;
	first->next = NULL;
}

void rr(s_stack **stack_a, s_stack **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	ra(stack_a);
	rb(stack_b);
}