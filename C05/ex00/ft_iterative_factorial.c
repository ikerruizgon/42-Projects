/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:10:39 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/20 18:05:04 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	res;

	count = nb;
	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (count > 1)
	{
		res = res * count;
		count--;
	}
	return (res);
}

/* int main()
{
    // Casos de prueba

    int num1 = 5;
    printf("Factorial de %d: %d\n", num1, ft_iterative_factorial(num1));

    int num2 = 0;
    printf("Factorial de %d: %d\n", num2, ft_iterative_factorial(num2));

    int num3 = -3;
    printf("Factorial de %d: %d\n", num3, ft_iterative_factorial(num3));

    int num4 = 7;
    printf("Factorial de %d: %d\n", num4, ft_iterative_factorial(num4));

    return 0;
} */