/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:14:26 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:49:00 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "lib/libft.h"

void main (int argc, char **argv)
{
    s_stack  **stack_a = NULL;

    create_stack(argv, stack_a);
    printf("%d\n", (*stack_a)->num);
}