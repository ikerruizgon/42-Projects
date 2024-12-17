/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:14:47 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:28:38 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*copy;

	i = 0;
	if (!s || !f)
		return (NULL);
	copy = (char *)malloc(ft_strlen(s) + 1);
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/* static char to_upper(unsigned int index, char c) {
	(void)index;
    if (c >= 'a' && c <= 'z') {
        c = c - 'a' + 'A';
    }
    return c;
}

int main() {
    const char *str = "hello world";

    char *result = ft_strmapi(str, to_upper);
    
    if (result) {
        printf("Original: %s\n", str);
        printf("Result: %s\n", result);
        free(result);
    } else {
        printf("Error.\n");
    }

    return 0;
} */