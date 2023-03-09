#ifndef INSTRA_H
# define INSTRA_H
# include"list.h"

void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_r_rotate_a(t_list **stack_a);
void	ft_r_rotate_b(t_list **stack_b);
void	ft_rotate_all(t_list **stack_a, t_list **stack_b);
void	ft_r_rotate_all(t_list **stack_a, t_list **stack_b);
void	ft_swap_all(t_list **stack_a, t_list **stack_b);

#endif
