/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:16:56 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/10 13:39:04 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_create_copy(size_t len)
{
	char	*copy;

	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	copy[len] = '\0';
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*copy;

	i = ft_strlen(s);
	j = 0;
	if (start >= i)
	{
		copy = ft_create_copy(0);
		if (copy == NULL)
			return (NULL);
		return (copy);
	}
	if (len > i - start)
		len = i - start;
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	while (j < len)
	{
		copy[j] = s[start + j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
/* int main() {
    char str[] = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *result = ft_substr(str, start, len);
    if (result != NULL) {
        printf("%s\n", result);
        free(result);
    } else {
        printf("Error\n");
    }

    return 0;
} */