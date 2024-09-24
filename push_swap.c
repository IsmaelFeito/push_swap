/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:14:26 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/24 13:55:13 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void main (int argc, char **argv)
{
    t_list  **stack_a = NULL;

    create_stack(argv, stack_a);
    printf("%d\n", (*stack_a)->num);
}