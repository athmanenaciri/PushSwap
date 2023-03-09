/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 02:17:21 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:03:11 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function returns a pointer to the second last node of the linked list
t_list  *ft_before_last(t_list *stack)
{
        t_list  *prev;

        // If the stack is empty, return the stack
        if (stack == NULL)
                return (stack);

        // Initialize the previous node to the first node of the stack
        prev = stack;

        // Traverse the stack until the last node is reached
        while (stack->next)
        {
                // Update the previous node to the current node
                prev = stack;
                // Move to the next node
                stack = stack->next;
        }

        // Return the pointer to the second last node of the linked list
        return (prev);
}

