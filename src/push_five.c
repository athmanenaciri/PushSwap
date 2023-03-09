/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:47:07 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:16:33 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Find the index of the smallest value in the stack and return its position
// by setting the value of the pointer parameter to its position.
// Return the index of the smallest value.
int	find_small(t_list *stack_a, int *ptr)
{
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = stack_a->position;
	// iterate through the stack to find the smallest value
	while (stack_a)
	{
		// if the current value is smaller than the smallest value found so far
		if (stack_a->position < index)
		{
			// update the index of the smallest value
			index = stack_a->position;
			// set i to the index of the smallest value found so far
			i = j;
		}
		stack_a = stack_a->next;
		j++;
	}
	// set the value of the pointer parameter to the position of the smallest value
	*ptr = index;
	// return the index of the smallest value
	return (i);
}

// Sort stack A with at most 5 numbers using a combination of push, swap, and rotate
// operations, and push the smallest two numbers to stack B.
void	push_five(t_list **stack_a, t_list **stack_b)
{
	int i;
	int index;
	int size;

	size = ft_lstsize(*stack_a);
	// while the size of stack A is larger than 3
	while (ft_lstsize(*stack_a) > 3)
	{
		// find the smallest number in stack A
		i = find_small(*stack_a, &index);
		// move the smallest number to the top of stack A
		while ((*stack_a)->position != index)
		{
			if (i < 2)
				ft_rotate_a(stack_a);
			else
				ft_r_rotate_a(stack_a);
		}
		// push the smallest number to stack B
		ft_push_b(stack_a, stack_b);
	}
	// if the size of stack A is 2, swap the two numbers
	if (size == 2)
		ft_swap_a(stack_a);
	// if stack A is not sorted, sort the top 3 numbers using push_three
	else if (if_sorted(*stack_a) == 0)
		push_three(stack_a, size - 3);
}

