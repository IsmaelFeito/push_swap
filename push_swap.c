/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:14:26 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 00:07:28 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main (int argc, char **argv)
{
    (void)argc;
    s_stack     **stack_a;
    s_stack     **stack_b;

    stack_a = ft_calloc(1, sizeof(s_stack *));
	stack_b = ft_calloc(1, sizeof(s_stack *));
    create_stack(argv, stack_a);
    print_stack_with_indices(*stack_a);
    free_list(stack_a);
	free_list(stack_b);
    return (0);
}
