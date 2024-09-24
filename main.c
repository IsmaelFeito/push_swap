#include "push_swap.h"

int main (int argc, char **argv)
{
    (void)argc;
    t_list  **stack_a = NULL;

    create_stack(argv, stack_a);
    printf("%ld\n", (*stack_a)->num);
    return 0;
}

