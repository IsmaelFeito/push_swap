/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:24:20 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 05:09:23 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ra(t_stack **stack_a, int print_flag)
{
	t_stack *last;
	t_stack *first;

	if (!*stack_a || !(*stack_a)->next)
		return;
	last = find_last_node(*stack_a);
	first = *stack_a;
	*stack_a = first->next;
	last->next = first;
	first->next = NULL;
	if (print_flag == OK)
		ft_putstr_fd("ra\n", STDOUT_FILENO);
}

void rb(t_stack **stack_b, int print_flag)
{
	t_stack *last;
	t_stack *first;

	if (!*stack_b || !(*stack_b)->next)
		return;
	last = find_last_node(*stack_b);
	first = *stack_b;

	*stack_b = first->next;
	last->next = first;
	first->next = NULL;
	if (print_flag == OK)
		ft_putstr_fd("rb\n", STDOUT_FILENO);
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return;
	ra(stack_a, KO);
	rb(stack_b, KO);
	ft_putstr_fd("rr\n", STDOUT_FILENO);
}