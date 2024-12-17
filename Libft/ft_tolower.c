/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:23:23 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:42:14 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/* int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i] != '\0') {
        str[i] = ft_tolower(str[i]);
        i++;
    }

    printf("%s\n", str);

    return 0;
} */