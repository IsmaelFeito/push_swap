/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:43:12 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/29 19:02:49 by ifeito-m         ###   ########.fr       */
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
	struct s_stack		*next;
}	t_stack;

//stack n content
int			create_stack(char *agrv[], t_stack **stack_a);
void		add_node_to_stack(t_stack **stack, char **numbers);
long		ft_atoi_v2(const char *str);
t_stack		*new_node(long num);
void		add_node_back(t_stack **stack, t_stack *new);
t_stack		*find_last_node(t_stack *list);
void		free_array(char **content);
int			look_to_duplicate_nmb(t_stack *stack);
void		free_list(t_stack **list);

//provisional
char		*ft_memcmp_v2(const void *s1, const void *s2, size_t n);
t_stack		**index_list(t_stack **stack_a);
size_t		ft_lstsize_v2(t_stack *lst);
int			pointer_size(char **nums);
int			min_nbr(t_stack *stack_a, long int prev_min);

//print_indexes_proof
void		print_stack_with_indices(t_stack *stack_a);

//movements
void		pa(t_stack **stack_a, t_stack **stack_b, \
								size_t *size_a, size_t *size_b);
void		pb(t_stack **stack_a, t_stack **stack_b, \
								size_t *size_a, size_t *size_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a, int print_flag);
void		rrb(t_stack **stack_b, int print_flag);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a, int print_flag);
void		rb(t_stack **stack_b, int print_flag);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a, int print_flag);
void		sb(t_stack **stack_b, int print_flag);

//algorithm
size_t		stack_get_pos(t_stack *stack, size_t index);
void		simple_sort(t_stack **stack_a, t_stack **stack_b, \
								size_t *size_a, size_t *size_b);
void		sorteator(t_stack **stack_a, t_stack **stack_b);

#endif