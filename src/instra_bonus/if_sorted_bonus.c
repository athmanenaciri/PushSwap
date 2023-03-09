/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_sorted_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 02:08:00 by anaciri           #+#    #+#             */
/*   Updated: 2022/12/08 17:05:38 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_sorted_bonus(t_list *stack_a, t_list *stack_b)
{
	t_list	*current;
	int		i;
	int		last;

	i = 0;
	last = stack_a->position;
	if (stack_a == NULL)
		return (0);
	current = stack_a;
	while (current != NULL)
	{
		if (last > current->position)
			return (0);
		last = current->position;
		i++;
		current = current->next;
	}
	if (stack_b != NULL)
		return (0);
	return (1);
}
