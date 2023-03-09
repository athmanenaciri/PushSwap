/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 02:19:27 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:00:04 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// function to index a node in the stack by counting the number of nodes in the stack with a lower value
void    indexing(t_list *stack_a, t_list *node)
{
        node->position = 0; // set the initial position of the node to 0
        if (stack_a == NULL) // if stack_a is empty, return
                return ;

        // loop through all nodes in stack_a
        while (stack_a)
        {
                // if the data of the current node in stack_a is greater than the data of the indexed node, increment the position of the current node
                if (stack_a->data > node->data)
                        stack_a->position += 1;
                // if the data of the current node in stack_a is less than or equal to the data of the indexed node, increment the position of the indexed node
                else
                        node->position += 1;

                stack_a = stack_a->next; // move to the next node in stack_a
        }
}

