/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:06:07 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/21 14:44:30 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/* int main()
{
    // Casos de prueba

    int num1 = 5;
    printf("power de %d: %d\n", num1, ft_iterative_power(num1, 2));

    int num2 = 0;
    printf("power de %d: %d\n", num2, ft_iterative_power(num2, 2));

    int num3 = -3;
    printf("power de %d: %d\n", num3, ft_iterative_power(num3, 2));

    int num4 = 7;
    printf("power de %d: %d\n", num4, ft_iterative_power(num4, 2));

    return 0;
} */