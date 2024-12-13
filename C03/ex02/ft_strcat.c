/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:25:28 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/15 11:46:24 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/* int main() {
    char dest[100] = "Hola, ";
    char src[] = "mundo!";

    // Usamos nuestra función my_strcat
    ft_strcat(dest, src);

    printf("Resultado de concatenar: %s\n", dest);

    return 0;
} */