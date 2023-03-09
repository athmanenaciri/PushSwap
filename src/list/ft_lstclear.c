/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:39:48 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:12:05 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst)
{
        t_list  *next; // Declare a variable to store the next node
        t_list  *cur; // Declare a variable to store the current node

        cur = *lst; // Assign the first node of the linked list to 'cur'
        while (cur)
        {
                next = cur->next; // Store the next node
                free(cur); // Deallocate the memory of the current node
                cur = next; // Move to the next node
        }
}

