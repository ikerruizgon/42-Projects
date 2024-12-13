/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:40:43 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:05:26 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcapitalize(char *str)
{
	int		c;
	char	*origin;

	c = 1;
	origin = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		if (((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')) && c)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 32;
			}
			c = 0;
		}
		else if (!(*str >= 'a' && *str <= 'z') && !(*str >= '0' && *str <= '9'))
		{
			c = 1;
		}
		str++;
	}
	return (origin);
}
/* int	main(void)
{
    // Cadenas de prueba
    char str1[] = ".hola 12que qu";
    char str2[] = "123Hola";
    char str3[] = "aBcD Pr9-se-a,a we";
	printf("Original: \"%s\"\n", str1);
	printf("Original: \"%s\"\n", str2);
	printf("Original: \"%s\"\n", str3);
    // Probar la función con diferentes cadenas
    printf("Minusculas: \"%s\"\n", ft_strcapitalize(str1));
    printf("Minusculas: \"%s\"\n", ft_strcapitalize(str2));
    printf("Minusculas: \"%s\"\n", ft_strcapitalize(str3));
    return 0;
} */