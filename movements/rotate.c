/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:24:20 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/16 15:26:33 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list **stack_a)
{
	t_list *last;
	t_list *first;

	if (!*stack_a || !(*stack_a)->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_a);
	first = *stack_a;

	*stack_a = first->next;
	last->next = first;
	first->next = NULL;
	ft_putstr_fd("ra", STDERR_FILENO);
}

void rb(t_list **stack_b)
{
	t_list *last;
	t_list *first;

	if (!*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	last = find_last_node(*stack_b);
	first = *stack_b;

	*stack_b = first->next;
	last->next = first;
	first->next = NULL;
	ft_putstr_fd("rb", STDERR_FILENO);
}

void rr(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	ra(stack_a);
	rb(stack_b);
	ft_putstr_fd("rr", STDERR_FILENO);
}