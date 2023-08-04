/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:37:59 by cxu               #+#    #+#             */
/*   Updated: 2023/05/16 13:43:11 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	str = ft_calloc ((ft_strlen(s) + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

/*
char	ttolower(unsigned int m, char c)
{
	(void)m;
	c = c - 32;
	return (c);
}
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char 	*s;
	char	(*f)(unsigned int, char);	

	f = ttolower;
	s = "abc";	
	printf("%s\n", ft_strmapi(s, f));
}
*/