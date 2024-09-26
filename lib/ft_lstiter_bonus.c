/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:44:10 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:26:49 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(s_stack *lst, void (*f)(void *))
{
	s_stack	*temp;

	temp = lst;
	while (temp)
	{
		f (temp->content);
		temp = temp->next;
	}
}
