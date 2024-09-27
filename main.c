#include "includes/push_swap.h"

int main (int argc, char **argv)
{
    (void)argc;
    s_stack     **stack_a;
    s_stack     **stack_b;

    create_stack(argv, stack_a);
    printf("%ld\n", (*stack_a)->num);
    return 0;
}

