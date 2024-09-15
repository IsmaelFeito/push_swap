/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:53:45 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/15 11:44:12 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**index_list(t_list **stack_a, char **nums)
{
	int j = 0;
	
	while(nums[j])
	{
		if((*stack_a)->num == ft_atoi_v2(nums[j]))
			(*stack_a)->id = j++;
		else
			(*stack_a)->next;
	}
	return(stack_a);
}

