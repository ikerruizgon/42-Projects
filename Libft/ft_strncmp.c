/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:55:52 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:31:54 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
/* int main() {
    char str1[] = "Hello";
    char str2[] = "Hello, World!";
    
    int result = ft_strncmp(str1, str2, 5);
    printf("%d\n", result);

    return 0;
} */