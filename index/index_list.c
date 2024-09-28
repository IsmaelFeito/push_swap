/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 02:12:33 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	search_lw_node_value(t_stack *current, long prev_min, long *min_value, t_stack **temp)
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

t_stack	**index_list(t_stack **stack_a)
{
	size_t		min_value;
	size_t		prev_min;
	t_stack		*temp;
	t_stack		*current;
	size_t		id;
	
	id = 0;
	prev_min = (LONG_MIN);
	while (id < (ft_lstsize_v2(*stack_a)))
	{	
		current = *stack_a;
		temp = NULL;
		min_value = (size_t)min_nbr(*stack_a, prev_min);
		
		while (current)
		{
			if ((current->num > (long int)prev_min) && (current->num) == (long int)min_value)
			{		
				min_value = current->num;
				temp = current;
			}
			current = current->next;
		}
		if (temp)
		{
			temp->id = id++;
			//printf("%li ", temp->id);
			//printf("%li\n", temp->num);
			prev_min = temp->num;
		}
		else
			break ;
	}
	return (stack_a);
}
