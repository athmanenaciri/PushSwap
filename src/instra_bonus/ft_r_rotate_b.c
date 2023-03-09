/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:31:33 by anaciri           #+#    #+#             */
/*   Updated: 2022/12/08 17:00:34 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_r_rotate_b(t_list **stack_b)
{
	t_list	*node;

	node = NULL;
	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next == NULL)
		return ;
	node = ft_before_last(*stack_b);
	node->next->next = *stack_b;
	*stack_b = node->next;
	node->next = NULL;
}
