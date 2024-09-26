/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:53:45 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:47:50 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_lstsize_v2(s_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

long	min_nbr(s_stack *stack)
{
	s_stack	*temp;

	temp = stack;
	while(stack)
	{
		if(stack->num < temp->num)
			temp = stack;
		stack = stack->next;
	}
	return(temp->num);
}

// void	temp_lst_if_tmp()
// {
// 	if(temp)
// 	{
// 		temp->id = id++;
// 		prev_min = temp->num;
// 	}
// }
