/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:45:16 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 05:09:38 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack_a, int print_flag)
{
	int temp;

	if (!stack_a || !stack_a->next)
		return;
	temp = stack_a->num;
	stack_a->num = stack_a->next->num;
	stack_a->next->num = temp;
	if (print_flag == OK)
		ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	sb(t_stack *stack_b, int print_flag)
{
	int temp;

	if (!stack_b || !stack_b->next)
		return;
	temp = stack_b->num;
	stack_b->num = stack_b->next->num;
	stack_b->next->num = temp;
	if (print_flag == OK)
		ft_putstr_fd("sb\n", STDOUT_FILENO);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_a->next || !stack_b || !stack_b->next)
		return;
	sa(stack_a, KO);
	sb(stack_b, KO);
	ft_putstr_fd("ss\n", STDOUT_FILENO);
}