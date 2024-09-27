/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:01:13 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/27 23:32:31 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

char	*ft_memcmp_v2(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	char			*u1;
	char		*u2;
	(void)n;
	
	u1 = (char *)s1;
	u2 = (char *)s2;
	i = 0;
	while (u2)
	{
		if (u1[0] > u2[i])
			return (&(u2[i]));
		i++;
	}
	return (NULL);
}

void	free_list(s_stack **list)
{
	s_stack *tmp;

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

	while (content[i])
		free(content[i++]);
	free(content);
}

int		pointer_size(char **arr)
{
	int	size;

	if (!arr)
		return (0);
	size = 0;
	while (arr[size])
		size++;
	return (size);
}
