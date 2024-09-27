/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:36:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 00:01:05 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(s_stack **stack_b, s_stack **stack_a)
{
	s_stack *temp;

	if(!*stack_b)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	if(*stack_a)
		(*stack_a)->prev = temp;
	*stack_a = temp;
	temp->prev = NULL;
}

void	pb(s_stack **stack_b, s_stack **stack_a)
{
	s_stack *temp;

	if(!*stack_a)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return;
	}
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	if(*stack_b)
		(*stack_b)->prev = temp;
	*stack_b = temp;
	temp->prev = NULL;
}