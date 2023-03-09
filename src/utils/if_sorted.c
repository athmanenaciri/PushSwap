/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:15:03 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:57:10 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// function to check if stack_a is sorted in ascending order
int     if_sorted(t_list *stack_a)
{
        t_list  *current;  // pointer to current node in stack
        int     i;  // counter to keep track of the number of nodes in stack
        int     last;  // variable to store the value of the last node in stack

        i = 0;
        last = stack_a->position;  // set last to the position of the first node in stack_a
        if (stack_a == NULL)  // if stack_a is empty, return 0
                return (0);

        current = stack_a;  // set current to the first node in stack_a

        while (current != NULL)  // loop through all nodes in stack_a
        {
                if (last > current->position)  // if the value of last is greater than the value of the current node, the stack is not sorted, return 0
                        return (0);
                last = current->position;  // set last to the value of the current node
                i++;  // increment the counter
                current = current->next;  // move to the next node in the stack
        }

        // if all nodes have been checked and the stack is sorted, return 1
        return (1);
}

