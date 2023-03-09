/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:30:43 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/03 23:30:45 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_r_rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_r_rotate_a(stack_a);
	ft_r_rotate_b(stack_b);
	write(1, "rrr\n", 4);
}
