/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/12 12:45:06 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*total_nodes(t_list *list)
{
	int		total;
	
	if (list == NULL)
		return (NULL);
	while (list->next)
	{
		list = list->next;
		i++;
	}	
	return (list);
}

void	index_list(t_list	**stack_a)
{
	int	i;
	t_list	*cpy;

	i = total_nodes(*stack_a);
	cpy = *stack_a;
	while(*stack_a->num && stack_a->next->num)
	{
		while(cpy->num > stack_a->next->num)
			*stack_a = *stack_a->next;
		if(cpy->num < *stack_a->num)
			cpy = *stack_a;

	}
	cpy->id = i--;
}
2 1 5 3 4 6
          cs