/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:08:20 by cxu               #+#    #+#             */
/*   Updated: 2023/05/11 17:03:05 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main()
{
	char alpha[27] = "ABCDEFGHIJKLMNOPKRSTUVWXYZ";
	int i;
	i = 0;
	for (i = 0; i < 27; i++)
	{
		printf("%c\n", ft_toupper(alpha[i]));
	}
}*/