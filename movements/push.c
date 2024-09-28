/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:36:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 05:12:14 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b, size_t *size_a, size_t *size_b)
{
	t_stack		*temp;

	if(!*stack_b)
		return;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	if(*stack_a)
		(*stack_a)->prev = temp;
	*stack_a = temp;
	temp->prev = NULL;
	ft_putstr_fd("pa\n", STDOUT_FILENO);
	*size_a = *size_a + 1;
	*size_b = *size_b - 1;
}

void	pb(t_stack **stack_a, t_stack **stack_b, size_t *size_a, size_t *size_b)
{
	t_stack		*temp;

	if(!*stack_a)
		return;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	if(*stack_b)
		(*stack_b)->prev = temp;
	*stack_b = temp;
	temp->prev = NULL;
	ft_putstr_fd("pb\n", STDOUT_FILENO);
	*size_b = *size_b + 1;
	*size_a = *size_a - 1;
}