/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:21:06 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:12:09 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_three(t_list **stack_a, int start)
{
    // Check if the first two elements are in ascending order
    if ((*stack_a)->position == start + 1
            && (*stack_a)->next->position == start + 0)
    {
        ft_swap_a(stack_a); // If so, swap them
    }
    // Check if the first and last elements are in ascending order
    else if ((*stack_a)->position == start + 2
            && (*stack_a)->next->position == start + 0)
    {
        ft_rotate_a(stack_a); // If so, rotate the stack once
    }
    // Check if the last two elements are in ascending order
    else if ((*stack_a)->position == start + 1
            && (*stack_a)->next->position == start + 2)
    {
        ft_r_rotate_a(stack_a); // If so, rotate the stack in the opposite direction
    }

    // If the stack is now sorted, exit the function
    if (if_sorted(*stack_a) == 1)
        return;

    ft_swap_a(stack_a); // Swap the first two elements
    push_three(stack_a, start); // Recursively call the function
}

