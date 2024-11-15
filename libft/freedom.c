/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:28:33 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/10/04 15:49:08 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/libft.h"

void	freedom(void **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
