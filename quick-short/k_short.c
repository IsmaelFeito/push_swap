#include "push_swap.h"

void	k_s(t_list **stack_a, t_list **stack_b)
{
	pb(stack_b, stack_a);				   // pivote
	if ((*stack_b)->num > (*stack_a)->num) // division
	{
		pb(stack_b, stack_a);
	}
}
