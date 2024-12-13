/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:21:29 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:05:14 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
    char *str1 = "Hello, World!";  // Cadena completamente imprimible
    char *str2 = "Hello\nWorld!";  // Cadena con un carácter no imprimible ('\n')
    char *str3 = "";               // Cadena vacía, considerada imprimible
    // Probar la función con diferentes cadenas
    printf("Test 1: \"%s\" -> %d\n", str1, ft_str_is_printable(str1));
    printf("Test 2: \"%s\" -> %d\n", str2, ft_str_is_printable(str2));
    printf("Test 3: \"%s\" -> %d\n", str3, ft_str_is_printable(str3)); 
    return 0;
} */