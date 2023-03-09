/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:08:14 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:39:39 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Find the index of the element in stack B with the given position
*/
int     find_by_pos(t_list *stack_b, int pos)
{
        int     i;

        i = 0;
        while (stack_b)
        {
                if (stack_b->position == pos)
                        return (i);
                i++;
                stack_b = stack_b->next;
        }
        return (-1);
}

/*
** Calculate the distance between a given position and the top/bottom of a stack,
** and return the smaller value of the two distances
*/
int     ft_dis(t_list *stack, int pos)
{
        if (pos < (ft_lstsize(stack) - pos))
                return (pos);
        return ((ft_lstsize(stack) - pos));
}

/*
** Move the element with the given position to the top of stack B
*/
void    top(t_list **stack_b, int pos, int i)
{
        if (i < ft_lstsize(*stack_b) / 2)
                while ((*stack_b)->position != pos)
                        ft_rotate_b(stack_b);
        else
                while ((*stack_b)->position != pos)
                        ft_r_rotate_b(stack_b);
}

/*
** Move the top element from stack B to stack A,
** using the element with the given position as a pivot
*/
void    push(t_list **stack_a, t_list **stack_b, int *pos, int j)
{
        int     i;

        // Move the pivot element to the top of stack B
        top(stack_b, *pos - 1, j);

        // Push the pivot element from stack B to stack A
        ft_push_a(stack_a, stack_b);

        // Move the element with the next highest position to the top of stack B
        i = find_by_pos(*stack_b, *pos);
        top(stack_b, *pos, i);

        // Decrement the position of the pivot element
        (*pos)--;

        // Push the element from stack B to stack A, and swap the top two elements in stack A
        ft_push_a(stack_a, stack_b);
        ft_swap_a(stack_a);
}

/*
** Sort stack B and push each element to stack A,
** using the distance to the top of stack B as a heuristic for choosing the pivot element
*/
void    push_back(t_list **stack_a, t_list **stack_b)
{
        int     i;
        int     j;
        int     pos;

        pos = ft_lstsize(*stack_b);

        // Loop through each position in stack B
        while (pos > 0)
        {
                pos--;

                // Find the indices of the two adjacent elements with the highest positions
                i = find_by_pos(*stack_b, pos);
                j = find_by_pos(*stack_b, pos - 1);

                // If the pivot element is closer to the top of stack B than its adjacent element,
                // move the pivot element to the top of stack B and push it to stack A
                if (pos == 0 || ft_dis(*stack_b, i) < ft_dis(*stack_b, j))
                {
                        top(stack_b, pos, i);
                        ft_push_a(stack_a, stack_b);
                }
                // Otherwise, use the adjacent element as the pivot element and push it to stack A
                else
                        push(stack_a, stack_b, &pos, j);
        }
}

