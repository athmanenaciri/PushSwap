/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:00:56 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:10:17 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

// function to add a node to the front of the list
void ft_lstadd_front(t_list **lst, t_list *new)
{
    // set the next of the new node to point to the current head
    new->next = *lst;
    // set the head to point to the new node
    *lst = new;
}

