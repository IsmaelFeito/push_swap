/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:53:45 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/14 13:18:54 by ifeito-m         ###   ########.fr       */
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

char **index_str(char **content)
{
	int i = 0;
	int	j = 1;
	int k = 0;
	char **cpy = malloc(sizeof(char **) * (content));
	if(!cpy)
		return(NULL);
	while(content[i++])
		cpy[i] = ft_strdup(content[i]);
	while(content[i] != NULL)
		if(cpy[0] > content[i])
		{
			cpy[0] = ft_memcmp_v2(cpy[0], content[i], 1);
		}
	while (cpy[j] > cpy[k] && cpy[j] != NULL)
	{
		if (cpy[j] > content[i])
		{
			cpy[j++] = ft_memcmp_v2(cpy[j], content[i], 1);
			k++;
		}
		i++;
	}
	return(cpy);
}
