/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:04:18 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 18:15:14 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* int main() {
    char str[] = "Hello, World!";
    char *copy = ft_strdup(str);

    printf("%s\n", copy);
    free(copy);

    return 0;
} */