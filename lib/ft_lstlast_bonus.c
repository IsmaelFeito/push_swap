/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:41:50 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:26:49 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

s_stack	*ft_lstlast(s_stack *lst)
{
	s_stack	*temp;

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
