/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 04:01:35 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:18:18 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Function to execute push_swap instructions based on user input */
int     instra(char *inp, t_list **stack_a, t_list **stack_b)
{
        /* Check if the input is rotate both stacks */
        if (ft_strcmp(inp, "rr\n") == 0)
                return (ft_rotate_all(stack_a, stack_b), 1);
        /* Check if the input is reverse rotate both stacks */
        else if (ft_strcmp(inp, "rrr\n") == 0)
                return (ft_r_rotate_all(stack_a, stack_b), 1);
        /* Check if the input is swap both stacks */
        else if (ft_strcmp(inp, "ss\n") == 0)
                return (ft_swap_all(stack_a, stack_b), 1);
        /* Check if the input is push to stack A */
        else if (ft_strcmp(inp, "pa\n") == 0)
                return (ft_push_a(stack_a, stack_b), 1);
        /* Check if the input is push to stack B */
        else if (ft_strcmp(inp, "pb\n") == 0)
                return (ft_push_b(stack_a, stack_b), 1);
        /* Check if the input is rotate stack A */
        else if (ft_strcmp(inp, "ra\n") == 0)
                return (ft_rotate_a(stack_a), 1);
        /* Check if the input is reverse rotate stack A */
        else if (ft_strcmp(inp, "rra\n") == 0)
                return (ft_r_rotate_a(stack_a), 1);
        /* Check if the input is rotate stack B */
        else if (ft_strcmp(inp, "rb\n") == 0)
                return (ft_rotate_b(stack_b), 1);
        /* Check if the input is reverse rotate stack B */
        else if (ft_strcmp(inp, "rrb\n") == 0)
                return (ft_r_rotate_b(stack_b), 1);
        /* Check if the input is swap stack A */
        else if (ft_strcmp(inp, "sa\n") == 0)
                return (ft_swap_a(stack_a), 1);
        /* Check if the input is swap stack B */
        else if (ft_strcmp(inp, "sb\n") == 0)
                return (ft_swap_b(stack_b), 1);
        /* If the input is not a valid instruction, print error message */
        else
                return (write(2, "Error\n", 6), 0);
}

/* Function to execute push_swap instructions based on user input */
int     execute(t_list **stack_a, t_list **stack_b)
{
        char    *inp;

        /* Keep taking input from user until no more input is provided */
        while (1)
        {
                inp = get_next_line(0); // get the next line of user input
                if (inp == NULL) // if no more input is provided, break out of the loop
                        break ;
                if (instra(inp, stack_a, stack_b) == 0) // execute the instruction
                        return (free(inp), 1); // free the memory allocated to the input string and return 1 (indicating an error occurred)
                free(inp); // free the memory allocated to the input string
        }
        return (0); // return 0 (indicating success)
}

