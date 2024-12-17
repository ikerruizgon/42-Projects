/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:47:27 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:26:00 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}
/* int main() {
    char str[20] = "Hello World!";
    printf("Before ft_bzero: '%s'\n", str);
    ft_bzero(str, 5);
    printf("After ft_bzero: ");
    
    int i = 0;
    while (i < 20) {
        printf("%c", str[i]);
        i++;
    }
    
    printf("\n");
    return 0;
} */