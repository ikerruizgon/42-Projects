/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:22:38 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:48:17 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/* int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    int result = memcmp(str1, str2, 5);

    if(result == 0) {
        printf("The memory blocks are equal.\n");
    } else if(result < 0) {
        printf("The first block is less than the second.\n");
    } else {
        printf("The first block is greater than the second.\n");
    }

    return 0;
} */