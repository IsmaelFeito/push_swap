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
