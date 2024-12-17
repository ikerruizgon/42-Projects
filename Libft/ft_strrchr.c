/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:19:23 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:36:34 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (char)c)
			r = s;
		s++;
	}
	if (*s == (char)c)
		r = s;
	if (r != NULL)
		return ((char *)r);
	else
		return (NULL);
}
/* int main() {
    char str[] = "Hello, World!";
    char ch = 'o';

    char *result = ft_strrchr(str, ch);
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("Character not found\n");
    }

    return 0;
} */