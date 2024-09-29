/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:43:38 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/09/29 19:12:41 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	look_to_duplicate_nmb(t_stack *stack)
{
	t_stack	*next_n;
	t_stack	*stack_tmp;

	stack_tmp = stack;
	while (stack_tmp)
	{
		next_n = stack_tmp->next;
		while (next_n != NULL)
		{
			if (stack_tmp->num == next_n->num)
			{
				ft_putstr_fd("Error\n", STDERR_FILENO);
				free_list(&stack);
				return (KO);
			}
			next_n = next_n->next;
		}
		stack_tmp = stack_tmp->next;
	}
	return (OK);
}

void	add_node_to_stack(t_stack **stack, char **content)
{
	int		j;
	long	num;
	t_stack	*node;

	num = 0;
	j = 0;
	while (content[j])
	{
		num = ft_atoi_v2(content[j++]);
		if (num > (long)INT_MAX || num < (long)INT_MIN)
			ft_putstr_fd("Error\n", STDERR_FILENO);
		node = new_node(num);
		add_node_back(stack, node);
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
				return (free_list(stack_a), ft_putstr_fd("Error\n", \
													STDERR_FILENO), KO);
			add_node_to_stack(stack_a, content);
			free_array(content);
			if (look_to_duplicate_nmb(*stack_a) == KO)
				return (KO);
			index_list(stack_a);
		}
		else
			return (free_list(stack_a), ft_putstr_fd("Error\n", \
													STDERR_FILENO), KO);
	}
	return (OK);
}
