/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:42:38 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function checks if the command-line arguments are valid
// It checks if any argument is an empty string, and returns an error if so
int     protect_args(int *ac, char **av)
{
        int     i;

        i = 1;
        while (i < *ac)
        {
                if (av[i][0] == '\0')
                {
                        write (1, "Error\n", 6);
                        return (1);
                }
                i++;
        }
        return (0);
}

// This function checks if there are any duplicates in the input list
int     check_dup(t_list **stack_a)
{
        if (repeat(*stack_a) == 1)
        {
                write (1, "Error\n", 6);
                return (1);
        }
        return (0);
}

// This function creates a linked list from the input array, and checks for any invalid inputs
// It returns an error if it encounters any invalid input, and adds the valid ones to the linked list
int     create_list(int *ac, char **av, int *nbr, t_list **stack_a)
{
        int             i;
        t_list  *node;

        i = 1;
        while (i < *ac)
        {
                if (ft_atoi(av[i], nbr) == 1)
                {
                        write (1, "Error\n", 6);
                        return (1);
                }
                node = ft_lstnew(*nbr);
                indexing(*stack_a, node);
                ft_lstadd_back(stack_a, node);
                i++;
        }
        return (0);
}

// This function determines the chunk size based on the input size
void    where(int size, t_list **stack_a, t_list **stack_b)
{
        if (size < 6)
                push_five(stack_a, stack_b);
        else if (size < 200)
                another_chunk(stack_a, stack_b, 5);
        else
                another_chunk(stack_a, stack_b, 10);
}

int     main(int ac, char **av)
{
        t_list  *stack_a;
        t_list  *stack_b;
        int             nbr;
        int             i;

        stack_a = NULL;
        stack_b = NULL;
        if (ac == 1)
                return (0);
        if (protect_args(&ac, av) || create_list(&ac, av, &nbr, &stack_a) || check_dup(&stack_a))
                return (ft_lstclear(&stack_a), 1);
        if (if_sorted(stack_a) == 1)
                return (ft_lstclear(&stack_a), 0);
        i = ft_lstsize(stack_a);
        where(i, &stack_a, &stack_b);
        push_back(&stack_a, &stack_b);
        ft_lstclear(&stack_a);
        ft_lstclear(&stack_b);
}

