/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:32:05 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 01:35:28 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rotate_a(t_list **stack_a)
{
	t_list	*node;
	t_list	*current;

	node = NULL;
	current = NULL;
	if (*stack_a == NULL)
		return ;
	if ((*stack_a)->next == NULL)
		return ;
	node = *stack_a;
	*stack_a = (*stack_a)->next;
	current = *stack_a;
	current = ft_lstlast(current);
	current->next = node;
	node->next = NULL;
}
