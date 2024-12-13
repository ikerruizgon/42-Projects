/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:13:23 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/07 12:22:59 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	med;

	med = *a / *b;
	*b = *a % *b;
	*a = med;
}
/*
int main() {
    int a = 4, b = 2;

    ft_ultimate_div_mod(&a, &b);

    printf("Cociente: %d, Resto: %d\n", a, b); 

    return 0;
}*/
