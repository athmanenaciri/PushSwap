/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:32:28 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:14:06 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* This function creates a new node for a linked list and returns a pointer to it. */
t_list  *ft_lstnew(int content)
{
        /* Allocate memory for a new node */
        t_list  *node = malloc(sizeof(t_list));
        
        /* If the allocation fails, return NULL */
        if (node == NULL)
                return (NULL);
        
        /* Set the data value of the node to the content parameter */
        node->data = content;
        
        /* Set the next pointer of the node to NULL, since this is a new node */
        node->next = NULL;
        
        /* Return a pointer to the newly created node */
        return (node);
}

