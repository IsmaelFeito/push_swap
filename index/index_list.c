/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/10/01 13:46:23 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	srch_lw_nd_vle(t_stack *current, long prev_min,
long *min_value, t_stack **temp)
{
	while (current)
	{
		if ((current->num > prev_min) && (current->num) == *min_value)
		{
			*min_value = current->num;
			*temp = current;
		}
		current = current->next;
	}
}

t_stack	*find_n_update_min(t_stack **stack_a, size_t prev_min)
{
	t_stack	*current;
	t_stack	*temp;
	size_t	min_value;

	current = *stack_a;
	temp = NULL;
	min_value = (size_t)min_nbr(*stack_a, prev_min);
	while (current)
	{
		if ((current->num > (long int)prev_min) && \
								(current->num) == (long int)min_value)
		{
			min_value = current->num;
			temp = current;
		}
		current = current->next;
	}
	return (temp);
}

t_stack	**index_list(t_stack **stack_a)
{
	size_t		prev_min;
	t_stack		*temp;
	size_t		id;

	id = 0;
	prev_min = (LONG_MIN);
	while (id < (ft_lstsize_v2(*stack_a)))
	{
		temp = find_n_update_min(stack_a, prev_min);
		if (temp)
		{
			temp->id = id++;
			prev_min = temp->num;
		}
		else
			break ;
	}
	return (stack_a);
}
