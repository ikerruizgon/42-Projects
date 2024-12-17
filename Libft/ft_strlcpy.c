/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:09:37 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 16:51:08 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char			*src_ini;
	size_t				contador;

	src_ini = src;
	contador = size;
	if (size > 0)
	{
		while (contador > 1 && *src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
			contador--;
		}
		*dst = '\0';
	}
	while (*src != '\0')
	{
		src++;
	}
	return (src - src_ini);
}

/* int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];
    size_t size = 0;
    size_t copied;

    copied = ft_strlcpy(dst, src, size);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    printf("Length of source: %zu\n", copied);

    return 0;
} */