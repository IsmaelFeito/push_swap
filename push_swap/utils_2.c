/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:06:33 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/13 17:41:09 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned char			*u1;
	const unsigned char		*u2;

	if(!s1 )
	u1 = (unsigned char *)s1;
	u2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (u1[i] - u2[i])
			return (u1[i] - u2[i]);
		i++;
	}
	return (0);
}
char	**ordered_array(char	**content)
{
	char	**order;
	int		i = 0;
	int		j = 0;
	
	order = malloc(pointer_size(content) * sizeof(char *));
	if(!order)
		return (NULL);
	while(content[i])
		order[i] = content[i++];
	while(i < (pointer_size(order) - 1))//i < tamano ptr - '\0'
	{
		j = i + 1;
		while(j < pointer_size(order))
		{
			if(ft_memcmp(order[i], order[j], )) < 0)
			j++;
		}
		i++;
	}
}

void	free_list(t_list **list)
{
	t_list	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	free(list);
}