/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:01:22 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:43:10 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}

/* int main() {
    char str[] = "Hello, world!";
    char *result = memchr(str, 'o', sizeof(str));

    if (result != NULL) {
        printf("Found 'o' at position: %ld\n", result - str);
    } else {
        printf("'o' not found\n");
    }

    return 0;
} */