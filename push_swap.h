/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:05:02 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/13 17:07:22 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "lib/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

typedef struct t_list
{
	int					id;
	long				num;
	int					cost;
	
	struct t_list *prev;
	struct t_list *next;
	struct t_list *swap;
}						t_list;

//stack n content
void	create_stack(char	*agrv[], t_list **stack_a);
void    add_node_to_stack(t_list, char **numbers, int *indx);
long	ft_atoi_v2(const char *str);
t_list  *new_node(int   id, long num);
void    add_node_back(t_list **stack, t_list *new);
t_list	*find_last_node(t_list *list);
void    free_str(char  **content);
void	look_to_duplicate_nmb(t_list *stack);
void	free_list(t_list **list);

int		pointer_size(char **nums);

//movements
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_b, t_list **stack_a);
void	rrr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);

#endif