/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:20:19 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:18:56 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* int main() {
    char *s1 = "Hello, ";
    char *s2 = "world!";

    char *result = ft_strjoin(s1, s2);

    if (result != NULL) {
        printf("Result: %s\n", result);
        free(result);
    } else {
        printf("Error.\n");
    }

    return 0;
} */