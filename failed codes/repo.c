#include "push_swap.h"

// t_list	*min_nbr(t_list *stack)
// {
// 	t_list	*min_val = stack;
// 	while(stack != NULL)
// 	{
// 		if(min_val->num > stack->num)
// 			min_val = stack;
// 		stack = stack->next;
// 	}
// 	return(min_val);
// }


t_list	**index_list_v2(t_list **stack)
{
	t_list	*actual_id = min_nbr(*stack);
	t_list *cpy;
	int	id = 1;
	while(*stack != NULL)
	{
		actual_id->id = id++;
		if(*stack == actual_id)
			*stack = (*stack)->next;
		else
		{
			cpy = *stack;
			while(cpy != NULL && cpy->next != actual_id)
				cpy = cpy->next;
			if (cpy != NULL)
				cpy->next;
		}
	}
	*stack = cpy;
	return(stack);
}

// int		pointer_size(char **nums)//tamaño doble ptr
// {
// 	int	i = 0;
	
// 	while(nums[i][0] != NULL);
// 			i++;
// 	return(i);
// }
// char	**order_ptr_2(char	**nums, char **temp)
// {
// 	int	i;
// 	int	j;
// 	int	array_size;

// 	i = 0;
// 	j = 0;
// 	array_size = pointer_size(nums);
// 	i = 0;
// 	while(**nums)
// 	{
// 		if(temp[j][0] == nums[i][0])
// 		{
// 			nums[i] = NULL;
// 			temp[++j][0] = nums[++i][0];
// 		}
// 		else if(nums[i][0] < temp[j][0])
// 			temp[j][0] = nums[i++][0];
// 	}
// 	return(temp);
// }
