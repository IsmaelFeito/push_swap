#include "includes/push_swap.h"

int main (int argc, char **argv)
{
    (void)argc;
    s_stack     **stack_a;
    s_stack     **stack_b;

    stack_a = ft_calloc(1, sizeof(s_stack *));
	stack_b = ft_calloc(1, sizeof(s_stack *));
    create_stack(argv, stack_a);
    free_list(stack_a);
	free_list(stack_b);
    return 0;
}

// int	main(int ac, char *av[])
// {
// 	t_stack	**stack_a;
// 	t_stack	**stack_b;

	
// 	if (ac > 1)
// 	{
// 		stack_creator(av, stack_a);
// 		if (!stack_sorted(*stack_a))
// 		{
// 			if (stack_len(*stack_a) == 2)
// 				swap(stack_a, stack_b, MOVESA);
// 			else if (stack_len(*stack_a) == 3)
// 				sort_stack_three(stack_a);
// 			else
// 				sort_stack(stack_a, stack_b);
// 		}
		
// 	}
// 	else
// 		ft_putstr_fd("Error\n", STDERR_FILENO);
// }