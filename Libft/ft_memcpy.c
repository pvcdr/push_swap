/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:35:41 by cxu               #+#    #+#             */
/*   Updated: 2023/05/16 11:08:59 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)source;
	if (dest == NULL && source == NULL)
		return (NULL);
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
	int lol[3] = {1, 2, 3};
	int lol2[3] = {0, 0, 0};
	int i = 0;
	for (i = 0; i < 3; i++)
	printf("%d\n", lol2[i]);
	ft_memcpy(lol2, lol, 8);
	//memcpy(lol2, lol, 8);
	for (i = 0; i < 3; i++)
	printf("%d\n", lol2[i]);
}*/