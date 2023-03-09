/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:38:11 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 07:53:15 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ft_strlen() function: takes a const char* as input and returns the length of the string as an integer */
int ft_strlen(const char *str)
{
        int i;
        
        /* initialize counter variable i to zero */
        i = 0;

        /* loop through string until null terminator is reached, incrementing i each time */
        while (str[i] != '\0')
                i++;

        /* return the final value of i, which represents the length of the string */
        return (i);
}

/* is_digit() function: takes a char* and a pointer to an integer sign as input and returns an integer */
int is_digit(char *str, int *sign)
{
        int i;
        
        /* initialize counter variable i to zero */
        i = 0;

        /* check if first character is '-' or '+', update sign and increment i if necessary */
        if (str[i])
        {
                if (str[i] == '-' || str[i] == '+')
                {
                        if (str[i] == '-')
                                *sign *= -1;
                        i++;
                }

                /* loop through the rest of the string, checking if each character is a digit */
                while (str[i])
                {
                        if (str[i] < '0' || str[i] > '9')
                                return (1);
                        i++;
                }
        }

        /* return 0 if all characters in the string are digits, 1 otherwise */
        return (0);
}

/* check_edges() function: takes a long integer as input and returns an integer */
int check_edges(long n)
{
        /* check if n is outside the range of a signed 32-bit integer */
        if (n < -2147483648)
                return (1);
        else if (n > 2147483647)
                return (1);
        else
                return (0);
}

/* ft_atoi() function: takes a char* and a pointer to an integer nbr as input and returns an integer */
int ft_atoi(char *str, int *nbr)
{
        int i;
        int sign;
        long res;

        /* initialize sign to -1 (negative) */
        sign = -1;

        /* check if all characters in the string are digits */
        i = is_digit(str, &sign);

        /* if the string contains non-digit characters, return 1 to indicate an error */
        if (i == 1)
                return (1);

        /* initialize res to zero */
        res = 0;

        /* if the first character is '-' or '+', skip it and start parsing digits from the next character */
        if (str[0] == '-' || str[0] == '+')
                i = 1;
        else
                i = 0;

        /* loop through the rest of the string, multiplying res by 10 and subtracting the value of each digit until all digits have been parsed */
        while (str[i] >= '0' && str[i] <= '9')
        {
                res *= 10;
                res -= str[i] - '0';
                i++;
        }

        /* set the value of nbr to the parsed integer multiplied by the sign */
        *nbr = sign * res;

        /* check if the parsed integer is outside the range of a signed 32-bit integer */
        return (check_edges(sign * res));
}

