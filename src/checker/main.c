/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:27:57 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     protect_args(int *ac, char **av)
{
        int     i;

        i = 1;
        while (i < *ac)
        {
                // check if the current argument is an empty string
                if (av[i][0] == '\0')
                {
                        write (1, "Error\n", 6);
                        return (1);
                }
                i++;
        }
        return (0);
}

int     check_dup(t_list **stack_a)
{
        // check if there are any repeated integers in stack a
        if (repeat(*stack_a) == 1)
        {
                write (1, "Error\n", 6);
                return (1);
        }
        return (0);
}

int     create_list(int *ac, char **av, int *nbr, t_list **stack_a)
{
        int             i;
        t_list  *node;

        i = 1;
        while (i < *ac)
        {
                // convert the current argument to an integer and check if it's valid
                if (ft_atoi(av[i], nbr) == 1)
                {
                        write (1, "Error\n", 6);
                        return (1);
                }
                // create a new node with the integer and add it to stack a
                node = ft_lstnew(*nbr);
                indexing(*stack_a, node);
                ft_lstadd_back(stack_a, node);
                i++;
        }
        return (0);
}

int     ft_strcmp(char *str1, char *str2)
{
        int     i;

        i = 0;
        // check if str1 is NULL
        if (str1 == NULL)
                return (1);
        // compare the characters in str1 and str2 until they're not the same
        while (str1[i])
        {
                if (str1[i] == str2[i])
                        i++;
                else
                        return (1);
        }
        return (0);
}

int     main(int ac, char **av)
{
        t_list  *stack_a;
        t_list  *stack_b;
        int             nbr;

        stack_a = NULL;
        stack_b = NULL;
        // if there are no arguments, return 0
        if (ac == 1)
                return (0);
        // check if the arguments are valid and create stack a
        if (protect_args(&ac, av)
                || create_list(&ac, av, &nbr, &stack_a) || check_dup(&stack_a))
                return (ft_lstclear(&stack_a), 1);
        // execute the sorting algorithm
        if (execute(&stack_a, &stack_b) == 1)
        {
                // if an error occurred during execution, clear both stacks and return 1
                ft_lstclear(&stack_a);
                ft_lstclear(&stack_b);
                return (1);
        }
        // check if stack a is sorted and output "OK" or "KO"
        if (if_sorted_bonus(stack_a, stack_b) == 1)
                write(1, "OK\n", 3);
        else
                write(1, "KO\n", 3);
}

