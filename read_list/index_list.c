/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/12 16:45:28 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*min_nbr(t_list *stack)
{
	t_list	*min_val = stack;
	while(stack != NULL)
	{
		if(min_val->num > stack->num)
			min_val = stack;
		stack = stack->next;
	}
	return(min_val);
}


t_list	**index_list_v2(t_list **stack)
{
	t_list	*actual_id = min_nbr(*stack);
	t_list *cpy;
	int	id = 1;
	while(*stack != NULL)
	{
		actual_id->id = id++;
		if(*stack == actual_id)
			*stack = (*stack)->next;
		else
		{
			cpy = *stack;
			while(cpy != NULL && cpy->next != actual_id)
				cpy = cpy->next;
			if (cpy != NULL)
				cpy->next;
		}
	}
	*stack = cpy;
	return(stack);
}
