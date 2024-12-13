/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:35:24 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/19 15:13:43 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_atoi(char *str)
{
	int		contadorn;
	int		num;

	contadorn = 0;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			contadorn++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (contadorn % 2 != 0)
		num = -num;
	return (num);
}
/* int main()
{
    // Ejemplos de prueba
    char str1[] = "  -42";
    char str2[] = "  +1234";
    char str3[] = "  0005678";
    char str4[] = "  -999999";
    char str5[] = "42abc";  

    // Llamada a la función y mostrando los resultados
    printf("Resultado 1: %d\n", ft_atoi(str1)); // Debe imprimir -42
    printf("Resultado 2: %d\n", ft_atoi(str2)); // Debe imprimir 1234
    printf("Resultado 3: %d\n", ft_atoi(str3)); // Debe imprimir 5678
    printf("Resultado 4: %d\n", ft_atoi(str4)); // Debe imprimir -999999
    printf("Resultado 5: %d\n", ft_atoi(str5)); 
    return 0;
} */