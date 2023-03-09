/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   another_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:44:10 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:45:31 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//The another_chunk function takes two stack pointers as well as an integer div.
//It divides the elements in stack A into chunks and pushes them onto stack B until all chunks are sorted.

void another_chunk(t_list **stack_a, t_list **stack_b, int div)
{
        int size;
        int chunk;
        int max;

        // get the size of the stack A
        size = ft_lstsize(*stack_a);
        // divide the stack into chunks
        chunk = size / div;
        // set max to the size of the first chunk
        max = chunk;
        // continue to push chunks onto stack B until all chunks are sorted
        while (1)
        {
                // push the next chunk of size `max - chunk` onto stack B
                push_chunk(stack_a, stack_b, max, chunk);
                // if all numbers have been moved to stack B, stop
                if (ft_lstsize(*stack_a) == 0)
                        break ;
                // set max to the size of the next chunk
                max += chunk;
        }
}

