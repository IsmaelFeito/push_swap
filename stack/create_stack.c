/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:09:00 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/13 15:36:04 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	look_to_duplicate_nmb(t_list *stack)
{
	t_list	*next_n;

	while (stack)
	{
		next_n = stack->next;
		while(next_n != NULL)
		{
			if (stack->num == next_n->num)
			{
				ft_putstr_fd("error\n", STDERR_FILENO);
				exit (EXIT_SUCCESS);
			}
			next_n = next_n->next;
		}
		stack = stack->next;
	}
}

void	add_node_to_stack(t_list **stack, char **content, int *indx)
{
	int j;
	long num;
	t_list *node;

	num = 0;
	if (!content[1])
	{
		num = ft_atoi_v2(content[0]);
		if (num == (long)INT_MAX + 1)
			ft_putstr_fd("error\n", STDERR_FILENO);
		node = new_node((*indx)++, num);
		add_node_back(stack, node);
	}
	else
	{
		j = 0;
		while (content[j])
		{
			num = ft_atoi_v2(content[j++]);
			if (num == (long)INT_MAX + 1)
				ft_putstr_fd("error\n", STDERR_FILENO);
			node = new_node((*indx)++, num);
			add_node_back(stack, node);
		}
	}
}

void	create_stack(char **argv, t_list **stack_a)
{
	int i;
	int indx;
	char **content;
	i = 0;
	indx = 1;

	while (argv[++i])
	{
		if (argv[i][0] != '\0')
		{
			content = ft_split(argv[i], ' ');
			index_str();
			add_node_to_stack(stack_a, content, &indx);
			look_to_duplicate_nmb(*stack_a);
			free_str(content);
		}
		else
			ft_putstr_fd("error\n", STDERR_FILENO);
	}
}
