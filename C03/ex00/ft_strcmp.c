/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:47:21 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/18 16:34:20 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/* int main() {
    char *cad1 = "Hola";
    char *cad2 = "Hola Mundo";
    char *cad3 = "Hola";

    printf("'%s' y '%s': %d\n", cad1, cad2, ft_strcmp(cad1, cad2));
    printf("'%s' y '%s': %d\n", cad1, cad3, ft_strcmp(cad1, cad3));
    printf("'%s' y '%s': %d\n", cad2, cad3, ft_strcmp(cad2, cad3));

    return 0;
} */