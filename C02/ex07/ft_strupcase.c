/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:29:38 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:05:18 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strupcase(char *str)
{
	char	*origin;

	origin = str;
	while (*origin != '\0')
	{
		if (*origin >= 'a' && *origin <= 'z')
		{
			*origin = *origin - 32;
		}
		origin++;
	}
	return (str);
}
/* int main()
{
    // Cadenas de prueba
    char str1[] = "hola mundo prueba";   // Debería convertirse a "HELLO WORLD"
    char str2[] = "123abc";        // Debería convertirse a "123ABC"
    char str3[] = "aBcD";          // Debería convertirse a "ABCD"
	printf("Original: \"%s\"\n", str1);
	printf("Original: \"%s\"\n", str2);
	printf("Original: \"%s\"\n", str3);
    // Probar la función con diferentes cadenas
    printf("Mayusculas: \"%s\"\n", ft_strupcase(str1));
    printf("Mayusculas: \"%s\"\n", ft_strupcase(str2));
    printf("Mayusculas: \"%s\"\n", ft_strupcase(str3));
    return 0;
}  */