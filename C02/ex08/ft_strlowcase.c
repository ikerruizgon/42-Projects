/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:36:30 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:05:22 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	char	*origin;

	origin = str;
	while (*origin != '\0')
	{
		if (*origin >= 'A' && *origin <= 'Z')
		{
			*origin = *origin + 32;
		}
		origin++;
	}
	return (str);
}
/* int main()
{
    // Cadenas de prueba
    char str1[] = "HOLA MUNDO";   // Debería convertirse a "HELLO WORLD"
    char str2[] = "123ABC";        // Debería convertirse a "123ABC"
    char str3[] = "aBcD";          // Debería convertirse a "ABCD"
	printf("Original: \"%s\"\n", str1);
	printf("Original: \"%s\"\n", str2);
	printf("Original: \"%s\"\n", str3);
    // Probar la función con diferentes cadenas
    printf("Minusculas: \"%s\"\n", ft_strlowcase(str1));
    printf("Minusculas: \"%s\"\n", ft_strlowcase(str2));
    printf("Minusculas: \"%s\"\n", ft_strlowcase(str3));
    return 0;
} */