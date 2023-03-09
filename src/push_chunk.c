/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:48:36 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:31:01 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** This function takes a chunk of values from stack A and pushes them onto
** stack B in ascending order.
**
** stack_a: a pointer to the stack A.
** stack_b: a pointer to the stack B.
** max: the maximum value allowed in the chunk.
** chunk: the number of elements in the chunk.
*/

void    push_chunk(t_list **stack_a, t_list **stack_b, int max, int chunk)
{
        int     i;
        int     half;

        half = chunk / 2; // Calculate the middle index of the chunk
        i = 0;
        while (*stack_a && i < chunk) // Loop until the chunk is full or stack A is empty
        {
                if ((*stack_a)->position <= max) // If the top element of stack A is within the range of the chunk
                {
                        if ((*stack_a)->position <= max - half) // If the element is in the lower half of the chunk
                                ft_push_b(stack_a, stack_b); // Push the element to stack B
                        else // If the element is in the upper half of the chunk
                        {
                                ft_push_b(stack_a, stack_b); // Push the element to stack B
                                ft_rotate_b(stack_b); // Rotate stack B
                        }
                        i++; // Increment the number of elements in the chunk
                }
                else // If the top element of stack A is not within the range of the chunk
                        ft_rotate_a(stack_a); // Rotate stack A
        }
}

