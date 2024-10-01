/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:38:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/10/01 16:42:38 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **stack_a, int print_flag)
{
	t_stack	*scnd_last;
	t_stack	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	last = find_last_node(*stack_a);
	scnd_last = *stack_a;
	while (scnd_last->next != last)
		scnd_last = scnd_last->next;
	last->next = *stack_a;
	scnd_last->next = NULL;
	*stack_a = last;
	if (print_flag == OK)
		ft_putstr_fd("rra\n", STDOUT_FILENO);
}

void	rrb(t_stack **stack_b, int print_flag)
{
	t_stack	*scnd_last;
	t_stack	*last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	last = find_last_node(*stack_b);
	scnd_last = *stack_b;
	while (scnd_last->next != last)
		scnd_last = scnd_last->next;
	last->next = *stack_b;
	scnd_last->next = NULL;
	*stack_b = last;
	if (print_flag == OK)
		ft_putstr_fd("rrb\n", STDOUT_FILENO);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return ;
	rra(stack_a, KO);
	rrb(stack_b, KO);
	ft_putstr_fd("rrr\n", STDOUT_FILENO);
}
