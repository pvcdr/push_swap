/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:24:22 by cxu               #+#    #+#             */
/*   Updated: 2023/05/11 17:03:49 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main()
{
	char alpha[27] = "abcdefghijklmnopkrstuvwxyz";
	int i;
	i = 0;
	for (i = 0; i < 27; i++)
	{
		printf("%c", ft_toupper(alpha[i]));
	}
}*/