/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:06:33 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/15 12:41:04 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_memcmp_v2(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned char			*u1;
	const unsigned char		*u2;

	u1 = (unsigned char *)s1;
	u2 = (const unsigned char *)s2;
	i = 0;
	while (u2)
	{
		if (u1[0] > u2[i])
			return (u2[i]);
		i++;
	}
	return (NULL);
}

void	free_list(t_list **list)
{
	t_list *tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	free(list);
}

void	free_str(char **content)
{
	int	i = 0;

	while (*content[i])
		free(*content[i++]);
	free(**content);
}

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
	i = 0;
	while(i < (pointer_size(order) - 1))//i < tamaño ptr - '\0'
	{
		j = i + 1;
		while(j < pointer_size(order))
		{
			if(ft_memcmp(content[i++], order[j], 1) < 0)
			{
				ft_memcpy(order[j], content[i], sizeof(char *));
				if(i == pointer_size(order) - 1)
				{
					i = 0;
					j++;
					if((ft_memcmp(content[i++], order[j], 1) < 0) && (j < pointer_size(order)) && (order[j - 1] != order[j]))
						ft_memcpy(order[j], content[i], sizeof(char *));
				}
			}
		}
		j++;
		i++;
	}
	return(order);
}