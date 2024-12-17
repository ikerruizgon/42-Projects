/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:40:05 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:40:21 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_int(int n)
{
	size_t	counter;
	long	num;

	counter = 0;
	num = (long)n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		counter++;
		num = -num;
	}
	while (num > 0)
	{
		counter++;
		num = num / 10;
	}
	return (counter);
}

static void	ft_fill_str(char *str, long num, int is_neg, size_t len)
{
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	if (is_neg)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		is_neg;
	size_t	len;
	char	*copy;
	long	num;

	is_neg = 0;
	num = (long)n;
	if (num < 0)
	{
		is_neg = 1;
		num = -num;
	}
	len = ft_count_int(n);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	copy[len] = '\0';
	ft_fill_str(copy, num, is_neg, len);
	return (copy);
}

/* int main() {
    int n = -12345;
    char *res = ft_itoa(n);
    write(1, res, ft_count_int(n));
    free(res);
    
    return 0;
} */