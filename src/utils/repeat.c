/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:57:26 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:01:54 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// function to check if a given value already exists in a given node
int     ft_check(int val, t_list *node)
{
        // loop through all nodes in the list
        while (node)
        {
                // if the value matches the data of the current node, return 1
                if (val == node->data)
                        return (1);

                node = node->next; // move to the next node in the list
        }

        return (0); // if the value was not found in the list, return 0
}

// function to check if there are any repeated values in a given list
int     repeat(t_list *head)
{
        int             i;
        t_list  *current;

        current = head; // set the current node to the head of the list
        while (current)
        {
                if (current->next == NULL)
                        break ; // if the current node is the last node in the list, break out of the loop

                i = ft_check(current->data, current->next); // check if the value of the current node is repeated in the rest of the list
                if (i == 1)
                        return (1); // if the value is repeated, return 1

                current = current->next; // move to the next node in the list
        }

        return (0); // if no repeated values were found, return 0
}

