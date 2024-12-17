/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:06:11 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:37:57 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*fin;
	int		i;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	fin = (char *)malloc(len - i + 1);
	if (fin == NULL)
		return (NULL);
	while (i < len)
	{
		fin[j++] = s1[i++];
	}
	fin[j] = '\0';
	return (fin);
}

/* int main()
{
    const char *s1 = "   \t  Hello World! \n\n";
    const char *set = " \t\n";
    char *result = ft_strtrim(s1, set);

    if (result != NULL)
    {
        printf("Result: '%s'\n", result);
        free(result);
    }
    else
    {
        printf("Error\n");
    }

    return 0;
} */