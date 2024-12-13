/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:44:40 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/12 12:04:59 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int		n;

	n = 1;
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
		{
			n = 0;
		}
		str++;
	}
	return (n);
}
/*  int main()
{
    char str1[] = "Hello worldd";
    char str2[] = "123hola";
    char str3[] = "";

    printf("str1 es alfabético: %d\n", ft_str_is_alpha(str1));
    printf("str2 no es alfabético: %d\n", ft_str_is_alpha(str2));
    printf("str3 esta vacio: %d\n", ft_str_is_alpha(str3));

    return 0;
}    */