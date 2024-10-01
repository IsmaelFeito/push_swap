/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k-sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:16:59 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/29 19:17:31 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static size_t	ft_stacksize(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

static void	push_to_b(t_stack **stack_a, t_stack **stack_b, \
											size_t *size_a, size_t *size_b)
{
	size_t		range;

	range = ft_sqrt(*size_a) * 133 / 100;
	while (*size_a > 0)
	{
		if ((*stack_a)->id <= *size_b)
			pb(stack_a, stack_b, size_a, size_b);
		else if ((*stack_a)->id <= *size_b + range)
		{
			pb(stack_a, stack_b, size_a, size_b);
			if (!((*stack_a)->id <= *size_b + range))
				rr(stack_a, stack_b);
			else
				rb(stack_b, OK);
		}
		else
			ra(stack_a, OK);
	}
}

static void	push_to_a(t_stack **stack_a, t_stack **stack_b, \
											size_t *size_a, size_t *size_b)
{
	while (*size_b > 0)
	{
		while ((*stack_b)->id != *size_b -1)
		{
			if (stack_get_pos(*stack_b, *size_b -1) <= *size_b / 2)
				rb(stack_b, OK);
			else
				rrb(stack_b, OK);
		}
		pa(stack_a, stack_b, size_a, size_b);
	}
}

void	sorteator(t_stack **stack_a, t_stack **stack_b)
{
	size_t	size_a;
	size_t	size_b;

	size_a = ft_stacksize(*stack_a);
	size_b = ft_stacksize(*stack_b);
	if (size_a > 5)
	{
		push_to_b(stack_a, stack_b, &size_a, &size_b);
		push_to_a(stack_a, stack_b, &size_a, &size_b);
	}
	else
		simple_sort(stack_a, stack_b, &size_a, &size_b);
}
