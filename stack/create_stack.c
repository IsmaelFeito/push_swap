/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:43:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/28 00:37:16 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	look_to_duplicate_nmb(t_stack *stack)
{
	t_stack	*next_n;

	while (stack)
	{
		next_n = stack->next;
		while(next_n != NULL)
		{
			if (stack->num == next_n->num)
			{
				ft_putstr_fd("Error\n", STDERR_FILENO);
				exit (EXIT_FAILURE);
			}
			next_n = next_n->next;
		}
		stack = stack->next;
	}
}

void	add_node_to_stack(t_stack **stack, char **content)
{
	int		 j;
	long	 num;
	t_stack *node;

	num = 0;
	if (!content[1])
	{
		num = ft_atoi_v2(content[0]);
		if (num > (long)INT_MAX || num < (long)INT_MIN)
			ft_putstr_fd("Error\n", STDERR_FILENO);
		node = new_node(num);
	//printf("%ld ", node->num);
	//printf("%ld\n", node->id);
		add_node_back(stack, node);
	}
	else
	{
		j = 0;
		while (content[j])
		{
			num = ft_atoi_v2(content[j++]);
			if (num > (long)INT_MAX || num < (long)INT_MIN)
				ft_putstr_fd("Error\n", STDERR_FILENO);
			node = new_node(num);
		//printf("%ld ", node->num);
		//printf("%ld\n", node->id);
			add_node_back(stack, node);
		}
	}
}

int	create_stack(char *argv[], t_stack **stack_a)
{
	int		i;
	char	**content;
	
	i = 0;
	while (argv[++i])
	{
		if (argv[i][0] != '\0')
		{
			content = ft_split(argv[i], ' ');
			if (!content)
				return (KO);
			add_node_to_stack(stack_a, content);
			look_to_duplicate_nmb(*stack_a);
			index_list(stack_a);
			free_array(content);
		}
		else
			ft_putstr_fd("Error\n", STDERR_FILENO);
	}
	return (OK);
}

void	print_stack_with_indices(t_stack *stack_a)
{
	t_stack *current = stack_a;

	while (current)
	{
		printf("Valor: %ld, Índice: %zu\n", current->num, current->id);
		current = current->next;
	}
}