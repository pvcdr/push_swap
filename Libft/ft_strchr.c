/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:35:19 by cxu               #+#    #+#             */
/*   Updated: 2023/05/11 16:42:46 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	u;

	i = 0;
	u = (unsigned char)c;
	while (s[i] != u)
	{
		if (s[i] == '\0')
			return (NULL);
		++i;
	}
	return (&((char *)s)[i]);
}

/*#include <stdio.h>

int main()
{
	char *test = "Ceci est un test";

	int c = 's';
	printf("%s", ft_strchr(test, c));
}*/