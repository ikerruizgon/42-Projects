/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:57:36 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/11/18 16:37:46 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*pattern;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		start = str;
		pattern = to_find;
		while (*start && *pattern && *start == *pattern)
		{
			start++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/* int main()
{
    char str[] = "Hola, mundo!";
    char to_find[] = "mundo";

    char *result = ft_strstr(str, to_find);

    if (result) {
        printf("Subcadena encontrada: %s\n", result);  // Imprime "mundo!"
    } else {
        printf("Subcadena no encontrada.\n");
    }

    return 0;
} */