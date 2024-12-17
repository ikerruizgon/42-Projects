/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:00:02 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:34:16 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*start;
	const char	*pattern;
	size_t		r_len;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (len > 0 && *big != '\0')
	{
		start = big;
		pattern = little;
		r_len = len;
		while (*start && *pattern && *start == *pattern && r_len > 0)
		{
			start++;
			pattern++;
			r_len--;
		}
		if (*pattern == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/* int main() {
    char big[] = "Hello, World!";
    char little[] = "World";

    char *result = ft_strnstr(big, little, 13);
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
} */