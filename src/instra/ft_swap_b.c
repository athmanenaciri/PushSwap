/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:36:09 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/03 23:42:12 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap_b(t_list **stack_b)
{
	int	tmp;

	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->data;
	(*stack_b)->data = (*stack_b)->next->data;
	(*stack_b)->next->data = tmp;
	write(1, "sb\n", 3);
}
