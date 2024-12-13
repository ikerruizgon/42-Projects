/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:05:29 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/18 16:35:13 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		return (*s1 - *s2);
	}
	return (0);
}
/* int main() {
    char *cad1 = "Hola Mundo";
    char *cad2 = "Hola Mundo";
    char *cad3 = "Hola";
    char *cad4 = "Hol";

    printf("'%s' y '%s' con n = 5: %d\n", cad1, cad2, ft_strncmp(cad1, cad2, 5));
    printf("'%s' y '%s' con n = 5: %d\n", cad1, cad3, ft_strncmp(cad1, cad3, 5));
    printf("'%s' y '%s' con n = 5: %d\n", cad3, cad4, ft_strncmp(cad3, cad4, 5));
    printf("'%s' y '%s' con n = 10: %d\n", cad1, cad2,ft_strncmp(cad1, cad2, 3));

    return 0;
} */