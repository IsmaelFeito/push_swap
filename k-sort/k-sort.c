/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k-sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:16:59 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 05:29:25 by ifeito-m         ###   ########.fr       */
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

static void	push_to_b(t_stack **stack_a, t_stack **stack_b, size_t *size_a, size_t *size_b)
{
	while (*size_a > 0)
	{
		if ((*stack_a)->id == *size_b)
			pb(stack_a, stack_b, size_a, size_b);
		else
			ra(stack_a, OK);
	}
}

static void	push_to_a(t_stack **stack_a, t_stack **stack_b, size_t *size_a, size_t *size_b)
{
	while (*size_b > 0)
	{
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
