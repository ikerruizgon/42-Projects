/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:05:19 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/07 12:23:12 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main() {
    int a = 10, b = 3;
    int div, mod;

    // Llamamos a la función para obtener el cociente y el resto
    ft_div_mod(a, b, &div, &mod);

    printf("Cociente: %d, Resto: %d\n", div, mod); // Imprime el resultado

    return 0;
}*/