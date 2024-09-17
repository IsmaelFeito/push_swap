/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/17 02:24:03 by ifeito-m         ###   ########.fr       */
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
	

	temp = *stack_a;
	temp_mn = min_nbr(stack_a);
	temp_mn->id = 1;
	temp_mx = max_num(stack_a);
	temp_mx->id = ft_lstsize(*stack_a);
	id = 2;
	while(temp)
	{
		if(temp != temp_mn && temp != temp_mx)
			
	}
	
}







