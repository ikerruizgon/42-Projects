/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:43:04 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:39:26 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}
/* int main() {
    printf("%d\n", ft_isprint('a'));
    printf("%d\n", ft_isprint('\0'));
    printf("%d\n", ft_isprint('@'));
    
    return 0;
} */