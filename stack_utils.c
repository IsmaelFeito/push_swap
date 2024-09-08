/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:39:31 by ifeito-m          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/09/07 17:36:08 by ifeito-m         ###   ########.fr       */
=======
/*   Updated: 2024/09/07 15:33:55 by ifeito-m         ###   ########.fr       */
>>>>>>> d0b93a0e929f19c78eab0363c2b02557880f8760
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD
void    full_free(char  **content)
{
    int     i;
    
    i = 0;
    while (content[i])
        free(content[i++]);
    free(content);
}

t_list	*find_last_node(t_list *list)
{
	if (list == NULL || !list)
=======
t_list	*find_last_node(t_list *list)
{
	if (list == NULL)
>>>>>>> d0b93a0e929f19c78eab0363c2b02557880f8760
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}



void    add_node_back(t_list **stack, t_list *new)
{
    t_list *enlace;

    enlace = find_last_node(*stack);
    if (*stack != NULL)
    {
        new->prev = enlace;
        new->next = NULL;
        enlace->next = new;
    }
    else
        *stack = new;
}

t_list  *new_node(int   id, long num)
{
    t_list  *node;

    node = ft_calloc(1, sizeof(t_list));
    if (!node)
        return (NULL);
    node->id = id;
    node->num = num;
    node->prev = NULL;
    node->next = NULL;
    return(node);
}

long	ft_atoi_v2(const char *str)
{
	int	i;
	long	nbr;
	long	sign;

	i = 0;
	while ((str[i] < 14 && str[i] >= 9) || str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	nbr = 0;
    if (!ft_isdigit(str[i]))
        ft_putstr_fd("error\n", STDERR_FILENO);
	while (ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
<<<<<<< HEAD
    if (nbr > INT_MAX || nbr < INT_MIN)
        ft_putstr_fd("error\n", STDERR_FILENO);
	return (nbr * sign);
}
=======
    if (n > INT_MAX || n < MIN_INT)
        ft_putstr_fd("error\n", STDERR_FILENO);
	return (nbr * sign);
}
>>>>>>> d0b93a0e929f19c78eab0363c2b02557880f8760
