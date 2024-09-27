/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:53:45 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 00:31:56 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_lstsize_v2(t_stack *lst)
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

int min_nbr(t_stack *stack_a, long int prev_min)
{
    int min = INT_MAX;
    while (stack_a)
    {
        if (stack_a->num > prev_min && stack_a->num < min)
            min = stack_a->num;
        stack_a = stack_a->next;
    }
    return min;
}

// void	temp_lst_if_tmp()
// {
// 	if(temp)
// 	{
// 		temp->id = id++;
// 		prev_min = temp->num;
// 	}
// }
