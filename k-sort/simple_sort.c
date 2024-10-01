/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 05:29:47 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/10/01 13:51:20 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_three(t_stack **stack_a)
{
	if ((*stack_a)->id == 2)
	{
		ra(stack_a, OK);
		if ((*stack_a)->id == 1)
			sa(stack_a, OK);
	}
	else if ((*stack_a)->id == 1)
	{
		if ((*stack_a)->next->id == 0)
			sa(stack_a, OK);
		else if ((*stack_a)->next->id == 2)
			rra(stack_a, OK);
	}
	else if ((*stack_a)->id == 0)
	{
		if ((*stack_a)->next->id == 2)
		{
			rra(stack_a, OK);
			sa(stack_a, OK);
		}
	}
}

static void	sort_four(t_stack **stack_a, t_stack **stack_b, \
											size_t *size_a, size_t *size_b)
{
	if (((*size_a) - 1) == (*stack_a)->id)
		pb(stack_a, stack_b, size_a, size_b);
	else if (stack_get_pos(*stack_a, 3) <= 1)
	{
		if ((*stack_a)->id <= 1 && stack_get_pos(*stack_a, 3) == 1)
			sa(stack_a, OK);
		else
			ra(stack_a, OK);
	}
	else
		rra(stack_a, OK);
}

static void	sort_five(t_stack **stack_a, t_stack **stack_b, \
											size_t *size_a, size_t *size_b)
{
	if (((*size_a) - 1) == (*stack_a)->id)
		pb(stack_a, stack_b, size_a, size_b);
	else if (stack_get_pos(*stack_a, 4) <= 2)
	{
		if ((*stack_a)->id <= 2 && stack_get_pos(*stack_a, 4) == 1)
			sa(stack_a, OK);
		else
			ra(stack_a, OK);
	}
	else
		rra(stack_a, OK);
}

void	simple_sort(t_stack **stack_a, t_stack **stack_b, \
											size_t *size_a, size_t *size_b)
{
	while (*size_a == 5)
		sort_five(stack_a, stack_b, size_a, size_b);
	while (*size_a == 4)
		sort_four(stack_a, stack_b, size_a, size_b);
	if ((*size_a) == 3)
		sort_three(stack_a);
	else if ((*size_a) == 2)
		if ((*stack_a)->id > (*stack_a)->next->id)
			sa(stack_a, OK);
	while (*stack_b)
	{
		pa(stack_a, stack_b, size_a, size_b);
		ra(stack_a, OK);
	}
}
