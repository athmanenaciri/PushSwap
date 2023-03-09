/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:34:00 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 01:35:34 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rotate_b(t_list **stack_b)
{
	t_list	*node;
	t_list	*current;

	node = NULL;
	current = NULL;
	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next == NULL)
		return ;
	node = *stack_b;
	*stack_b = (*stack_b)->next;
	current = *stack_b;
	current = ft_lstlast(current);
	current->next = node;
	node->next = NULL;
}
