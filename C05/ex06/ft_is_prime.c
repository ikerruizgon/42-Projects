/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:53:46 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/21 13:01:58 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/* int main() {
    // Probar algunos números
    int numeros[] = {1, 2, 3, 4, 5, 9, 11, 15, 17, 19, 25};
    for (int i = 0; i < 11; i++) {
        int numero = numeros[i];
        if (ft_is_prime(numero)) {
            printf("%d es primo.\n", numero);
        } else {
            printf("%d no es primo.\n", numero);
        }
    }

    return 0;
} */