/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:13:13 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:43:02 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/* int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i] != '\0') {
        str[i] = ft_toupper(str[i]);
        i++;
    }

    printf("%s\n", str);

    return 0;
} */