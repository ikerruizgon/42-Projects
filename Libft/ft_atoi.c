/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:29:13 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 16:52:30 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		counter;
	int		signs;
	int		num;

	counter = 1;
	signs = 0;
	num = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			counter = -1;
		nptr++;
		signs++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	if (signs > 1)
		return (0);
	return (counter * num);
}
/* int main(void)
{
    const char *str1 = "   -12345";
    const char *str2 = "42";
    const char *str3 = "   +6789";
    const char *str4 = "   -+123";
    const char *str5 = "abc123";

    printf("String: '%s', Integer: %d\n", str1, ft_atoi(str1));
    printf("String: '%s', Integer: %d\n", str2, ft_atoi(str2));
    printf("String: '%s', Integer: %d\n", str3, ft_atoi(str3));
    printf("String: '%s', Integer: %d\n", str4, ft_atoi(str4));
    printf("String: '%s', Integer: %d\n", str5, ft_atoi(str5));

    return 0;
} */