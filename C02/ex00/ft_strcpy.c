/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:29:22 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:16:20 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/* int main(void) {
    char src[50] = "Hola, mundo!";
    char dest[50] = "Prueba de iker";
    // Llamada a la función ft_strcpy
    ft_strcpy(dest, src);

    // Mostrar el resultado
    printf("Cadena copiada: %s\n", dest);

    return 0;
} */