/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/24 13:56:14 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	search_lw_node_value(t_list *current, long prev_min, long *min_value, t_list **temp)
{
	while(current)
	{
		if((current->num > prev_min) && (current->num) == *min_value)
		{		
			*min_value = current->num;
			*temp = current;
		}
		current = current->next;
	}
}

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
		//search_lw_node_value(current, prev_min, &min_value, &temp);
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
