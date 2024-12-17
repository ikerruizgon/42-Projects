/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:18:39 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:34:11 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
	{
		return (0);
	}
	return (1);
}
/* int main() {
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('1'));
    printf("%d\n", ft_isalnum('@'));
    
    return 0;
} */