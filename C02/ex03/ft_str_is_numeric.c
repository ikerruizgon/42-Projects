/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:01:50 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:05:03 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			n = 0;
		}
		str++;
	}
	return (n);
}
/* int main()
{
    // Cadenas de prueba
    char *str1 = "12345";  // Debería ser numérica
    char *str2 = "12a45";  // No es numérica (contiene 'a')
    char *str3 = "987654"; // Debería ser numérica
    char *str4 = "";       // Cadena vacía, generalmente considerada numérica

    // Probar la función con diferentes cadenas
    printf("Test 1: \"%s\" -> %d\n", str1, ft_str_is_numeric(str1));
    printf("Test 2: \"%s\" -> %d\n", str2, ft_str_is_numeric(str2));
    printf("Test 3: \"%s\" -> %d\n", str3, ft_str_is_numeric(str3));
    printf("Test 4: \"%s\" -> %d\n", str4, ft_str_is_numeric(str4));

    return 0;
}   */