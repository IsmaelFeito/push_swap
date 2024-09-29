/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:45:16 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/29 19:07:56 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **stack_a, int print_flag)
{
	t_stack		*temp;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = (*stack_a)->next;
	(*stack_a)->next = temp;
	if (print_flag == OK)
		ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	sb(t_stack **stack_b, int print_flag)
{
	t_stack		*temp;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = (*stack_b)->next;
	(*stack_b)->next = temp;
	if (print_flag == OK)
		ft_putstr_fd("sb\n", STDOUT_FILENO);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (!(*stack_a) || !(*stack_a)->next || !(*stack_b) || !(*stack_b)->next)
		return ;
	sa(stack_a, KO);
	sb(stack_b, KO);
	ft_putstr_fd("ss\n", STDOUT_FILENO);
}
