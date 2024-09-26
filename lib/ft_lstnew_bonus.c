/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:21:50 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/26 10:26:49 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

s_stack	*ft_lstnew(void *content)
{
	s_stack	*temp;

	temp = (s_stack *)malloc(sizeof(s_stack));
	if (temp == NULL)
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}
/*int	main(void)
{
	t_list	*jose;

	jose = ft_lstnew("temp");
	printf("%s", jose->content);
	return (0);
}
 */