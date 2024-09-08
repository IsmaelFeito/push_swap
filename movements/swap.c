/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:45:16 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/08 16:10:48 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_list   *stack_a)
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

void    sb(t_list   *stack_b)
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

void    ss(t_list   *stack_a, t_list *stack_b)
{
    int temp;

    if (!stack_a || !stack_a->next || !stack_b || !stack_b->next)
    {
        ft_putstr_fd("error\n", STDERR_FILENO);
        return;
    }
    //sa
    temp = stack_a->num;
    stack_a->num = stack_a->next->num;
    stack_a->next->num = temp;
    //sb
    temp = stack_b->num;
    stack_b->num = stack_b->next->num;
    stack_b->next->num = temp;
}