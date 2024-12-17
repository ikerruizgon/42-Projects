/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:32:31 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:09:07 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	int		ini;

	count = 0;
	ini = 1;
	while (*s)
	{
		if (*s != c && ini == 1)
		{
			count++;
			ini = 0;
		}
		else if (*s == c)
			ini = 1;
		s++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_free_split(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free (result);
}

static char	**ft_s_split(char const *s, char c, int *i, char **copy)
{
	size_t	len;
	int		j;

	j = 0;
	while (s[*i])
	{
		while (s[*i] == c)
			(*i)++;
		if (s[*i] != '\0')
		{
			len = ft_word_len(s + *i, c);
			copy[j] = ft_substr(s, *i, len);
			if (!copy[j])
			{
				ft_free_split(copy);
				return (NULL);
			}
			j++;
			(*i) += len;
		}
	}
	copy[j] = NULL;
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	word_count;
	char	**copy;

	i = 0;
	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	copy = (char **)malloc((word_count + 1) * sizeof(char *));
	if (copy == NULL)
		return (NULL);
	return (ft_s_split(s, c, &i, copy));
}

/* int main()
{
    char **result;
    char *str = "Hello world this is a test";
    char delimiter = ' ';

    result = ft_split(str, delimiter);

    if (result == NULL)
    {
        printf("Error.\n");
        return 1;
    }
	
    int i = 0;
    while (result[i] != NULL)
    {
        printf("Word %d: %s\n", i + 1, result[i]);
        i++;
    }

    ft_free_split(result);

    return 0;
} */