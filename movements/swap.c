/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:45:16 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:26:49 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(s_stack *stack_a)
{
	int temp;

	if (!stack_a || !stack_a->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	temp = stack_a->num;
	stack_a->num = stack_a->next->num;
	stack_a->next->num = temp;
}

void	sb(s_stack *stack_b)
{
	int temp;

	if (!stack_b || !stack_b->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	temp = stack_b->num;
	stack_b->num = stack_b->next->num;
	stack_b->next->num = temp;
}

void	ss(s_stack *stack_a, s_stack *stack_b)
{
	int temp;

	if (!stack_a || !stack_a->next || !stack_b || !stack_b->next)
	{
		ft_putstr_fd("error\n", STDERR_FILENO);
		return;
	}
	// sa
	sa(stack_a);
	// sb
	sb(stack_b);
}