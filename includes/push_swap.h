/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:43:12 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 01:58:24 by ifeito-m         ###   ########.fr       */
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

# define OK 0
# define KO 1

typedef struct s_stack
{
	size_t				id;
	long				num;
	int					cost;
	struct s_stack		*prev;
	struct s_stack		*next;
	struct s_stack		*swap;
}	t_stack;

typedef struct s_handler
{
	t_stack			*stack_a;
	t_stack			*stack_b;
}	t_handler;

//stack n content
int			create_stack(char *agrv[], t_stack **stack_a);
void		add_node_to_stack(t_stack **stack, char **numbers);
long		ft_atoi_v2(const char *str);
t_stack		*new_node(long num);
void		add_node_back(t_stack **stack, t_stack *new);
t_stack		*find_last_node(t_stack *list);
void		free_array(char **content);
int		look_to_duplicate_nmb(t_stack *stack);
void		free_list(t_stack **list);

//provisional
char		*ft_memcmp_v2(const void *s1, const void *s2, size_t n);
char		**index_str(char **content);
t_stack		**index_list(t_stack **stack_a);
size_t		ft_lstsize_v2(t_stack *lst);
int			pointer_size(char **nums);
char		**order_ptr_2(char **nums, char **temp);
char		**order_ptr(char **nums);
int			min_nbr(t_stack *stack, long prev_min);

//print_indexes_proof
void		print_stack_with_indices(t_stack *stack_a);

//movements
void		pa(t_stack **stack_b, t_stack **stack_a);
void		pb(t_stack **stack_b, t_stack **stack_a);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		ss(t_stack *stack_a, t_stack *stack_b);
void		sa(t_stack *stack_a);
void		sb(t_stack *stack_b);

#endif