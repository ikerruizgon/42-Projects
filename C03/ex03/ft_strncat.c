/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:47:22 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/15 11:57:10 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	n;

	ptr = dest;
	n = 0;
	while (*ptr != '\0')
	{
		ptr++;
	}
	if (nb > 0)
	{
		while (*src != '\0' && n < nb)
		{
			*ptr = *src;
			ptr++;
			src++;
			n++;
		}
	}
	*ptr = '\0';
	return (dest);
}
/* int main()
{
    char dest[50] = "Hola, ";
    char src[] = "mundo!";

    // Concatenar solo los primeros 3 caracteres de 'src' a 'dest'
    ft_strncat(dest, src, 3);

    printf("Resultado de concatenar: %s\n", dest);  // Imprime "Hola, mun"

    return 0;
} */