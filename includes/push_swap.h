/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:43:12 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/27 23:31:38 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

typedef struct t_stack
{
	size_t			id;
	long			num;
	int				cost;
	struct t_stack	*prev;
	struct t_stack	*next;
	struct t_stack	*swap;
}	s_stack;

typedef struct s_handler
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
}	t_handler;

//stack n content
void	create_stack(char	*agrv[], s_stack **stack_a);
void    add_node_to_stack(s_stack **stack, char **numbers);
long	ft_atoi_v2(const char *str);
s_stack  *new_node(long num);
void	add_node_back(s_stack **stack, s_stack *new);
s_stack	*find_last_node(s_stack *list);
void    free_str(char  **content);
void	look_to_duplicate_nmb(s_stack *stack);
void	free_list(s_stack **list);

//provisional
char	*ft_memcmp_v2(const void *s1, const void *s2, size_t n);
char **index_str(char **content);
s_stack	**index_list(s_stack **stack_a);
size_t	ft_lstsize_v2(s_stack *lst);
int		pointer_size(char **nums);
char	**order_ptr_2(char	**nums, char **temp);
char	**order_ptr(char	**nums);
int		min_nbr(s_stack *stack, long int prev_min);

//print_indexes_proof
void print_stack_with_indices(s_stack *stack_a);

//movements
void	pa(s_stack **stack_b, s_stack **stack_a);
void	pb(s_stack **stack_b, s_stack **stack_a);
void	rrr(s_stack **stack_a, s_stack **stack_b);
void	rra(s_stack **stack_a);
void	rrb(s_stack **stack_b);
void	rr(s_stack **stack_a, s_stack **stack_b);
void	ra(s_stack **stack_a);
void	rb(s_stack **stack_b);
void	ss(s_stack *stack_a, s_stack *stack_b);
void	sa(s_stack *stack_a);
void	sb(s_stack *stack_b);

#endif