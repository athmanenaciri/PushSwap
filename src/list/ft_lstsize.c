/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:56:42 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:15:23 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function takes a pointer to a linked list and returns the number of nodes in the list.
int     ft_lstsize(t_list *lst)
{
        int     counter; // Counter variable to keep track of the number of nodes

        counter = 0; // Initialize counter to zero
        while (lst) // Loop through the list as long as the current node is not NULL
        {
                counter++; // Increment counter for each node
                lst = lst->next; // Move to the next node
        }
        return (counter); // Return the total number of nodes in the list
}

