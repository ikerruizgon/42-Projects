/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:24:06 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/21 12:43:20 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0 || nb < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/* int main()
{
    // Casos de prueba

    int num1 = 5;
    printf("power de %d: %d\n", num1, ft_recursive_power(num1, 2));

    int num2 = 0;
    printf("power de %d: %d\n", num2, ft_recursive_power(num2, 2));

    int num3 = -3;
    printf("power de %d: %d\n", num3, ft_recursive_power(num3, 2));

    int num4 = 7;
    printf("power de %d: %d\n", num4, ft_recursive_power(num4, 2));

    return 0;
} */