/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:29:52 by anaciri           #+#    #+#             */
/*   Updated: 2023/03/02 08:20:23 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *read_buff_size(int fd, char *lines)
{
        char    *bufer;
        int     i;

        i = 1;
        bufer = malloc(BUFFER_SIZE + 1); // allocate memory for a buffer
        if (bufer == NULL)
                return (NULL);
        while (i && (ft_strchr(lines, '\n')) == NULL) // read until a newline is encountered
        {
                i = read(fd, bufer, BUFFER_SIZE); // read from file descriptor into buffer
                if (i == -1)
                {
                        free(bufer);
                        return (NULL);
                }
                bufer[i] = '\0'; // null terminate the buffer
                lines = ft_strjoin(lines, bufer); // append buffer contents to lines
        }
        free (bufer);
        return (lines); // return the accumulated lines
}

char    *one_line(char *lines)
{
        int     i;

        i = 0;
        if (lines[i] == '\0')
                return (NULL);
        while (lines[i] != '\n' && lines[i]) // find the index of the first newline character
                i++;
        return (ft_substr(lines, 0, ++i)); // return a substring of lines up to and including the newline character
}

char    *lines_rest(char *file_line)
{
        int     j;
        char    *dup;

        j = 0;
        while (file_line[j] != '\n' && file_line[j]) // find the index of the first newline character
                j++;
        if (file_line[j] == '\0')
        {
                free(file_line);
                return (NULL);
        }
        dup = ft_substr(file_line, ++j, ft_strlen(file_line)); // return a substring of file_line after the newline character
        free(file_line);
        return (dup);
}

char    *get_next_line(int fd)
{
        static char     *file_line;
        char            *o_line;

        if (fd < 0 || BUFFER_SIZE <= 0)
                return (NULL);
        file_line = read_buff_size(fd, file_line); // read BUFFER_SIZE bytes into file_line
        if (file_line == NULL)
                return (NULL);
        o_line = one_line(file_line); // extract the first line from file_line
        file_line = lines_rest(file_line); // extract the remainder of file_line
        return (o_line); // return the extracted line
}

