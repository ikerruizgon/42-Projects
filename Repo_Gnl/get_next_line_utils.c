/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:46:35 by ikruiz-g          #+#    #+#             */
/*   Updated: 2025/02/06 17:45:12 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	contador;

	contador = 0;
	while (*s != '\0')
	{
		contador++;
		s++;
	}
	return (contador);
}

char	*ft_strdup(const char *s)
{
	int		lenght;
	char	*copy;
	int		count;

	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;
	copy = (char *)malloc(lenght + 1);
	if (copy == NULL)
		return (NULL);
	count = 0;
	while (count < lenght)
	{
		copy[count] = s[count];
		count++;
	}
	copy[lenght] = '\0';
	return (copy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2);
	copy = (char *)malloc(total + 1);
	if (copy == NULL)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		copy[i] = s2[j];
		i++;
		j++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)*s == (char)c)
		return ((char *)s);
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
