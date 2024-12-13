/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:39:59 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/07 12:23:24 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int main() {
    int x = 5, y = 10;

    printf("Antes del intercambio:\n");
    printf("x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Después del intercambio:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}*/