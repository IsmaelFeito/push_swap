/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:14:26 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 12:37:39 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"


static int	is_sorted(t_stack *stack_a)
{
	size_t	prev;
	
	prev = stack_a->id;
	stack_a = stack_a->next;
	while (stack_a)
	{
		if (prev > stack_a->id)
			return (KO);
		prev = stack_a->id;
		stack_a = stack_a->next;
	}
	return (OK);
}

int main (int argc, char **argv)
{
	(void)argc;
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (create_stack(argv, &stack_a))
		return (KO);
	//print_stack_with_indices(stack_a);
	if (is_sorted(stack_a) == KO)
		sorteator(&stack_a, &stack_b);
	free_list(&stack_a);
	return (OK);
}
