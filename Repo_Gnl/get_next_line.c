/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:46:08 by ikruiz-g          #+#    #+#             */
/*   Updated: 2025/02/03 21:36:16 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char str[BUFFER_SIZE];  // Definimos un búfer estático
    int bytes_read;
    static int counter = 0;

    // Leemos el archivo y almacenamos los datos en 'str'
    bytes_read = read(fd, str + counter, BUFFER_SIZE - counter - 1);  // Leemos más datos

    if (bytes_read <= 0) {
        return NULL;  // Si no hay más datos o error, devolvemos NULL
    }

    counter += bytes_read;  // Actualizamos el contador

    str[counter] = '\0';  // Aseguramos que la cadena esté terminada con '\0'
	return (str);
}

/* int main()
{
    int fd = open("prueba.txt", O_RDONLY);  // Abre el archivo en modo lectura
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Llamamos a la función get_next_line (no se espera que funcione correctamente aún)
    char *line;
	while ((line = get_next_line(fd)) != NULL)
    {
        printf("Linea: %s", line);  // Imprime lo que leímos
    }
	
    close(fd);
    return 0;
} */
