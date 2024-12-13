/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:37:20 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/07 12:21:54 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str != '\0')
	{
		contador++;
		str++;
	}
	return (contador);
}
/*int main() {
    char str[] = "Hola, Mundo!";
    
    int length = ft_strlen(str);
    printf("La longitud de la cadena es: %d\n", length);

    return 0;
}*/