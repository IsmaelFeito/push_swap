/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:41:50 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/04/08 18:30:09 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = NULL;
	if (lst == NULL)
		return (lst);
	while (lst != NULL)
	{
		temp = lst;
		lst = lst->next;
	}
	return (temp);
}
