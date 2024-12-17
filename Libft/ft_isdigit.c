/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:12:17 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:38:28 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}
/* int main() {
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit('1'));
    printf("%d\n", ft_isdigit('@'));
    
    return 0;
} */