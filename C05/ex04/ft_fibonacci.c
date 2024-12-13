/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:32:29 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/21 16:18:09 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
/* int main()
{
    int index = 6;
    int result = ft_fibonacci(index);

    // Imprimir el número de Fibonacci en la posición 'index'
    if (result != -1)
        printf("El número es: %d\n", result);
    else
        printf("Índice inválido.\n");

    return 0;
} */