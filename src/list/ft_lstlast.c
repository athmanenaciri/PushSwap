/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:26:40 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:13:09 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function returns the last node of a linked list.

#include "push_swap.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *ptr;

    // Traverse the linked list until the end is reached
    while (lst)
    {
        // Keep track of the current node as we traverse
        ptr = lst;

        // Move to the next node
        lst = lst->next;
    }

    // Return the last node
    return (ptr);
}

