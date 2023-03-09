/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:51 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 01:35:14 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	node = NULL;
	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next != NULL)
		node = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = node;
}
