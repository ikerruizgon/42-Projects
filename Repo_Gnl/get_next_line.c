/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:46:08 by ikruiz-g          #+#    #+#             */
/*   Updated: 2025/02/06 17:46:40 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *fill_line_buffer(int fd, char *left_c, char *buffer);
char *set_line(char *line_buffer);

char	*get_next_line(int fd)
{
	char *buffer;
	char *line;
    static char	*left_c;
	
	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (NULL);
	line = fill_line_buffer(fd, left_c, buffer);
	free(buffer);
	buffer = NULL;
	if (!line) {
        return (NULL);
    }
	left_c = set_line(line);
    return (line);
}

char *fill_line_buffer(int fd, char *left_c, char *buffer)
{
    ssize_t bytes_read;
    char *tmp;

    bytes_read = 1;
    while (bytes_read > 0)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            free(left_c);
            return NULL;
        }
        if (bytes_read == 0)
            break;
        buffer[bytes_read] = '\0';
        if (!left_c)
            left_c = ft_strdup("");
        tmp = left_c;
        left_c = ft_strjoin(tmp, buffer);
        free(tmp);
        if (ft_strchr(buffer, '\n'))
            break;
    }
    return left_c;
}


char *set_line(char *line_buffer)
{
	int i;
	char *left_c;

	i = 0;
    while (line_buffer[i] != '\n' && line_buffer[i] != '\0') {
        i++;
    }

    if (line_buffer[i] == '\n') {
        line_buffer[i] = '\0';
        i++;
    }

    left_c = ft_strdup(&line_buffer[i]);
    if (*left_c == 0)
    {
        free(left_c);
        left_c = NULL;
    }
	return (left_c);
}

/* int main()
{
    int fd = open("prueba.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL) {
        printf("Line: %s\n", line);
        free(line); // Free the allocated memory for the line
    }

    close(fd);
    return 0;
} */
