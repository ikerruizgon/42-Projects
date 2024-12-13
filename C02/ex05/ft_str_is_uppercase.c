/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:15:48 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:05:10 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			n = 0;
		}
		str++;
	}
	return (n);
}
/* int main()
{
    char str1[] = "HELLO";
    char str2[] = "hola123@";
    char str3[] = "";
	char str4[] = "lower";

    printf("str1 es 1: %d\n", ft_str_is_uppercase(str1));  // Debería ser 1
    printf("str2 es 0: %d\n", ft_str_is_uppercase(str2));  // Debería ser 1
    printf("str3 es 1: %d\n", ft_str_is_uppercase(str3));  // Debería ser 1
	printf("str4 es 0: %d\n", ft_str_is_uppercase(str4));  // Debería ser 0

    return 0;
}  */