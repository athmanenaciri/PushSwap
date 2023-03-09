/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:30:25 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:24:03 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// This function finds the first occurrence of the character 'c' in the string 's'
// and returns a pointer to that character. If the character is not found,
// it returns NULL.
char    *ft_strchr(const char *s, int c)
{
        int     i;

        i = 0;
        if (!s)
                return (NULL);
        while (s[i] != (char)c)
        {
                if (s[i] == '\0')
                        return (NULL);
                i++;
        }
        return ((char *)s);
}

// This function copies the string 'src' to the memory pointed to by 'dst'.
// It returns a pointer to the destination string.
char    *ft_strcpy(char *dst, const char *src)
{
        int     i;

        i = 0;
        if (src == NULL)
                return (NULL);
        while (src[i])
        {
                dst[i] = src[i];
                i++;
        }
        dst[i] = '\0';
        return (dst);
}

// This function concatenates two strings 's1' and 's2' into a newly allocated string.
// It returns a pointer to the new string.
char    *ft_strjoin(char *s1, char *s2)
{
        char    *k;

        if (!s2)
                return (NULL);
        if (!s1)
        {
                s1 = (char *)malloc(1 * sizeof(char)); // allocate memory for s1
                if (!s1) // if allocation failed
                        return (NULL);
                s1[0] = '\0'; // set s1 to an empty string
        }
        k = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1); // allocate memory for the new string
        if (!k) // if allocation failed
                return (NULL);
        ft_strcpy(k, s1); // copy s1 into the new string
        ft_strcpy(k + ft_strlen(s1), s2); // copy s2 after s1 in the new string
        free(s1); // free memory allocated for s1
        return (k); // return pointer to new string
}

// This function returns a substring of the string 's' starting at index 'start'
// and with a length of 'len'.
char    *ft_substr(char *s, int start, int len)
{
        char    *p;
        int             i;

        if (s == NULL)
                return (NULL);
        if (len > ft_strlen(&s[start])) // check if len is larger than the remaining string
                p = malloc((ft_strlen(&s[start]) + 1) * sizeof(char)); // allocate memory for substring
        else
                p = malloc((len + 1) * sizeof(char)); // allocate memory for substring
        if (p == NULL) // if allocation failed
                return (NULL);
        if (start >= ft_strlen(s)) // if start is larger than the string length
                start = ft_strlen(s); // set start to the end of the string
        i = 0;
        while (i < len && s[start + i]) // copy characters from s into p
        {
                p[i] = s[start + i];
                i++;
        }
        p[i] = '\0'; // add null terminator to p
        return (p); // return pointer to new substring
}

