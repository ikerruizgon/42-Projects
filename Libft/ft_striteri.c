/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:14:22 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:17:13 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* static void to_uppercase(unsigned int index, char *c) {
    (void)index;

    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;
    }
}

int main() {
    char str[] = "hello world";

    ft_striteri(str, to_uppercase);

    printf("Result: %s\n", str);

    return 0;
} */