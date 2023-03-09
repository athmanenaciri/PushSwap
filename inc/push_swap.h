/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:36:20 by anaciri           #+#    #+#             */
/*   Updated: 2022/12/08 17:23:50 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"
# include "list.h"
# include "instra.h"

int		ft_atoi(char *str, int *nbr);
int		repeat(t_list *head);
void	indexing(t_list *satck_a, t_list *node);
void	push_chunk(t_list **stack_a, t_list **stack_b, int max, int chunk);
void	another_chunk(t_list **stack_a, t_list **stack_b, int div);
void	push_back(t_list	**stack_a, t_list **stack_b);
int		ft_strcmp(char *str1, char *str2);
int		if_sorted(t_list *stack_a);
int		if_sorted_bonus(t_list *stack_a, t_list *stack_b);
void	push_three(t_list **stack_a, int start);
void	push_five(t_list **stack_a, t_list **stack_b);
int		execute(t_list **stack_a, t_list **stack_b);

#endif
