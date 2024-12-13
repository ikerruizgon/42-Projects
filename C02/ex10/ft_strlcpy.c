/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:36:33 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 18:08:23 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*src_ini;
	unsigned int	contador;

	src_ini = src;
	contador = size;
	while (contador > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		contador--;
	}
	*dest = '\0';
	while (*src != '\0')
	{
		src++;
	}
	return (src - src_ini);
}
/* int main() {
    char destino[10];
    char *origen = "Hola, Mundo";

    // Llamada a nuestra versión de ft_strlcpy
    unsigned int len = ft_strlcpy(destino, origen, sizeof(destino));

    printf("Cadena copiada: '%s'\n", destino);
    printf("Longitud de la cadena de origen: %u\n", len);

    return 0;
} */