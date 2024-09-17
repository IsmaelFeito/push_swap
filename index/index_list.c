/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/17 17:54:05 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*min_nbr(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while(stack)
	{
		if(stack->num < temp->num)
			temp = stack;
		stack = stack->next;
	}
	return(temp);
}

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

t_list	**index_list(t_list **stack_a)
{
	t_list	*temp_mn;
	t_list	*temp_mx;
	t_list	*temp;
	int		id;
	
	temp = max_num(stack_a);
	temp->id = ft_lstsize(*stack_a);
	id = (ft_lstsize(*stack_a) - 1);
	while(temp)
	{	
		temp = temp->prev;
		while(*stack_a)
		{
			if((*stack_a)->num < temp->num)
				temp = (*stack_a);
			(*stack_a) = (*stack_a)->next;
		}
		temp->id = id--;
	}
	return(temp);
}
