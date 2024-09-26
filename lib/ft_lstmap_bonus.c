/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:09:51 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:26:49 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

s_stack	*ft_lstmap(s_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	s_stack	*begin;
	s_stack	*new;
	s_stack	*temp;

	if (!lst)
		return (0);
	temp = lst;
	begin = NULL;
	while (temp)
	{
		new = ft_lstnew(temp->content);
		if (!new)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		new->content = f(new->content);
		ft_lstadd_back(&begin, new);
		temp = temp->next;
	}
	return (begin);
}
