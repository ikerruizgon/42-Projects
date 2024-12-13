/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:23:18 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/20 18:34:01 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

/* int main()
{
    // Casos de prueba

    int num1 = 5;
    printf("Factorial de %d: %d\n", num1, ft_recursive_factorial(num1));

    int num2 = 0;
    printf("Factorial de %d: %d\n", num2, ft_recursive_factorial(num2));

    int num3 = -3;
    printf("Factorial de %d: %d\n", num3, ft_recursive_factorial(num3));

    int num4 = 7;
    printf("Factorial de %d: %d\n", num4, ft_recursive_factorial(num4));

    return 0;
} */