/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:47:54 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:26:11 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	contador;

	contador = 0;
	while (*s != '\0')
	{
		contador++;
		s++;
	}
	return (contador);
}

/* int main() {
    char str[] = "Hello, World!";
    size_t length;

    length = ft_strlen(str);
    printf("%zu\n", length);

    return 0;
} */