/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:28:13 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 01:35:17 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;

	current = NULL;
	if (*stack_a == NULL)
		return ;
	current = *stack_a;
	*stack_a = ((*stack_a)->next);
	current->next = *stack_b;
	*stack_b = current;
}
