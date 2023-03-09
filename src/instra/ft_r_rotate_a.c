/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:28:56 by anaciri           #+#    #+#             */
/*   Updated: 2022/12/08 16:10:51 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_r_rotate_a(t_list **stack_a)
{
	t_list	*node;

	node = NULL;
	if (*stack_a == NULL)
		return ;
	if ((*stack_a)->next == NULL)
		return ;
	node = ft_before_last(*stack_a);
	node->next->next = *stack_a;
	*stack_a = node->next;
	node->next = NULL;
	write(1, "rra\n", 4);
}
