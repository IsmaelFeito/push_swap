/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:01:13 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/30 11:56:37 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_list(t_stack **list)
{
	t_stack	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		freedom((void **)list);
		*list = tmp;
	}
}

void	free_array(char **content)
{
	int	i;

	i = 0;
	while (content[i])
		freedom((void **)&content[i++]);
	freedom((void **)&content);
}
