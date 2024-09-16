/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:54:27 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/16 15:30:01 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		pointer_size(char **nums)//tamaño doble ptr
{
	int	i = 0;
	
	while(nums[i][0] != NULL);
			i++;
	return(i);
}
char	**order_ptr_mini(char	**nums)
char	**order_ptr(char	**nums)
{
	char **temp;
	int	array_size = pointer_size(nums);
	int	i;
	int	j;
	
	i = 0;
	temp = malloc(sizeof (nums[array_size][0]));
	if (!temp)
		return(NULL);
	while(nums[i][0] != '\0')
	{
		while(i <= array_size)
		{
			if(nums[i][0] < temp[0][0])
				temp[0][0] = nums[i++][0];	
			else if(i < array_size && nums[i][0] > temp[0][0])
				i++;
			else if(i == array_size)
			{
				i = 0;
				while(**nums)
				{
					if(temp[j][0] == nums[i][0])
					{
						nums[i] = NULL;
						temp[++j][0] = nums[++i][0];
					}
					else if(nums[i][0] < temp[j][0])
						temp[j][0] = nums[i++][0];
				}
			}
		}
	}
	return(temp);
}

