/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:35:20 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:07:05 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

//The ft_lstadd_back function adds a new node to the end of a linked list.
//The function takes in two arguments, a pointer to a pointer to the head
//of the list (lst) and a pointer to the new node to be added (new).

//If the head of the list is null, it sets the head to the new node.
//Otherwise, it iterates through the list until it reaches the last node
//and then sets the next pointer of the last node to the new node.
//If the pointer to the head is null, it simply returns without performing any action.


void ft_lstadd_back(t_list **lst, t_list *new)
{
    // create a temporary pointer variable and assign it the value of the input pointer
    t_list *ptr;
    ptr = *lst;

    // check if the input pointer is NULL
    if (*lst == NULL)
        // if it is, set the input pointer to the new node and return
        *lst = new;
    else
    {
        // if it isn't, iterate through the list until we reach the end
        while (ptr->next != NULL)
            ptr = ptr->next;
        // set the next pointer of the last node to the new node
        ptr->next = new;
    }
}

