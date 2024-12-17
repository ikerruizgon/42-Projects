/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:25:53 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:10:52 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)*s == (char)c)
		return ((char *)s);
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}

/* int main() {
    char str[] = "Hello, World!";
    char *result;

    result = ft_strchr(str, 'W');
    if (result != NULL)
        printf("Found: %s\n", result);
    else
        printf("Character not found\n");

    return 0;
} */