/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:51:01 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/21 12:56:59 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/* int main() {
    // Número predefinido que se quiere comprobar
    int numero = 25; // Puedes cambiar este valor a cualquier otro número

    int resultado = ft_sqrt(numero);
    if (resultado == 0) {
        printf("La raíz cuadrada entera no existe para %d.\n", numero);
    } else {
        printf("La raíz cuadrada entera de %d es %d.\n", numero, resultado);
    }

    return 0;
} */