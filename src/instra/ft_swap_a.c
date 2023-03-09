/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:02:22 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/03 23:35:32 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap_a(t_list **stack_a)
{
	int	tmp;

	if (*stack_a == NULL)
		return ;
	if ((*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a)->position;
	(*stack_a)->position = (*stack_a)->next->position;
	(*stack_a)->next->position = tmp;
	write(1, "sa\n", 3);
}
