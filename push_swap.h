/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:43:12 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/24 13:51:48 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "finished/lib/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_list
{
	size_t			id;
	long			num;
	int				cost;
	struct s_list	*prev;
	struct s_list	*next;
	struct s_list	*swap;
}	t_list;

typedef struct s_handler
{
	struct s_list	*stack_a;
	struct s_list	*stack_b;
}	t_handler;

//stack n content
void	create_stack(char	*agrv[], t_list **stack_a);
void    add_node_to_stack(t_list **stack, char **numbers, int *indx);
long	ft_atoi_v2(const char *str);
t_list  *new_node(long num);
void	add_node_back(t_list **stack, t_list *new);
t_list	*find_last_node(t_list *list);
void    free_str(char  **content);
void	look_to_duplicate_nmb(t_list *stack);
void	free_list(t_list **list);

//provisional
char	*ft_memcmp_v2(const void *s1, const void *s2, size_t n);
char **index_str(char **content);
t_list	**index_list(t_list **stack_a, char **nums);
size_t	ft_lstsize_v2(t_list *lst);
int		pointer_size(char **nums);
char	**order_ptr_2(char	**nums, char **temp);
char	**order_ptr(char	**nums);

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