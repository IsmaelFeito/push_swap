/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/18 16:48:13 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**index_list(t_list **stack_a)
{
	long	min_value;
	long	prev_min;
	t_list	*temp;
	t_list	*current;
	size_t		id;
	
	id = 0;
	prev_min = (INT_MIN - 1);
	while(id < (ft_lstsize_v2(*stack_a)))
	{
		current = *stack_a;
		temp = NULL;
		min_value = min_nbr(*stack_a);
		while(current)
		{
			if((current->num > prev_min) && (current->num) == min_value)
			{
				min_value = current->num;
				temp = current;
			}
			current = current->next;
		}
		if(temp)
		{
			temp->id = id++;
			prev_min = temp->num;
		}
		else
			break;
	}
	return(stack_a);
}
