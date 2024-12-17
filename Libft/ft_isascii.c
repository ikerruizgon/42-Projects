/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikruiz-g <ikruiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:25:55 by ikruiz-g          #+#    #+#             */
/*   Updated: 2024/12/16 17:38:33 by ikruiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
	{
		return (0);
	}
	return (1);
}
/* int main() {
    printf("%d\n", ft_isascii('a'));
    printf("%d\n", ft_isascii(128));
    printf("%d\n", ft_isascii('@'));
    
    return 0;
} */