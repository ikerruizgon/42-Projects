/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:20:14 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:29:40 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*mem;
	unsigned char	*ptr;
	size_t			i;

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ptr = (unsigned char *)mem;
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (mem);
}
/* int main() {
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *arr;
    size_t i;

    arr = ft_calloc(nmemb, size);
    if (arr == NULL)
        return 1;

    i = 0;
    while (i < nmemb) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);
    return 0;
} */