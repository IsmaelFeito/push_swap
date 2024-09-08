/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:38:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/08 18:26:26 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_list   **stack_a)
{
    t_list  *scnd_last;
    t_list  *last;

    if (!*stack_a || !(*stack_a)->next)
    {
        ft_putstr_fd("error\n", STDERR_FILENO);
        return;
    }
    last = find_last_node(*stack_a);
    scnd_last = last->prev;
    
    last->next = *stack_a;
    (*stack_a)->prev = last;
    scnd_last->next = NULL;
    *stack_a = last;
}

void    rb(t_list   **stack_b)
{
    t_list  *last;
    t_list  *first;

    if (!*stack_b || !(*stack_b)->next)
    {
        ft_putstr_fd("error\n", STDERR_FILENO);
        return;
    }
    last = find_last_node(*stack_b);
    first = *stack_b;
    
    *stack_b = first->next;
    last->next = first;
    first->next = NULL;
}
void    rrr(t_list  *stack_a, t_list    *stack_b)
{
    t_list  *aux;

    aux = find_last_node(stack_a);
    stack_a->prev->num = aux->num;
    aux->num = NULL;
    aux = find_last_node(stack_b);
    stack_b->prev->num = aux->num;
    aux->num = NULL;
}