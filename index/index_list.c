/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/18 12:41:38 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_list	*min_nbr(t_list *stack)
// {
// 	t_list	*temp;

// 	temp = stack;
// 	while(stack)
// 	{
// 		if(stack->num < temp->num)
// 			temp = stack;
// 		stack = stack->next;
// 	}
// 	return(temp);
//}

t_list	*max_num(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while(stack)
	{
		if(stack->num > temp->num)
			temp = stack;
		stack = stack->next;
	}
	return(temp);
}

t_list	**index_list(t_list **stack_a)//bubble_short
{
//	t_list	*temp_mn;
	t_list	*temp_mx;
	t_list	*temp;
	int		id; //size_t buscar el mss pequeño asignar id y devolver numero, no nodo, recorri stack y hago 2 bucles (id menor que n(tamaño), volver 1°nodo buscr nodo a nodo me quedo con el menor y mayot que mi num), al dalir el num 
	
	temp = max_num(stack_a);
	temp->id = ft_lstsize(*stack_a)-1);
	id = (ft_lstsize(*stack_a) - 2);
	while(1 < 0)
	{
		temp = temp->prev;
		while(*stack_a)
		{
			if(((*stack_a)->num < temp->num) && (temp->prev->num > (*stack_a)->num))
				temp = (*stack_a);
			(*stack_a) = (*stack_a)->next;
		}
		temp->id = id--;
	}
	return(temp);
}
