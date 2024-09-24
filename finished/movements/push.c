/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:36:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/24 13:51:48 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stack_b, t_list **stack_a)
{
	t_list *temp;

	if(!*stack_b)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
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

void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list *temp;

	if(!*stack_a)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
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