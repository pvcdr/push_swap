/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:10:06 by cxu               #+#    #+#             */
/*   Updated: 2023/08/04 11:35:50 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(const char *s, char delimiter)
{
	int	strings;

	strings = 0;
	while (*s)
	{
		while (*s == delimiter && *s)
			s++;
		if (*s != delimiter && *s)
		{
			strings++;
			while (*s != delimiter && *s)
				s++;
		}
	}
	return (strings);
}

static void	*ft_free(char **matrix)
{
	int	i;

	i = 0;
	if (matrix)
	{
		while (matrix[i])
		{
			free(matrix[i]);
			i++;
		}
		free(matrix);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words;
	int		i;
	size_t	len;

	words = count_strings(s, c);
	matrix = (char **)ft_calloc(words + 1, sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	i = -1;
	while (++i < words)
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] != c && s[len] != '\0')
			len++;
		matrix[i] = (char *)ft_calloc(len + 1, sizeof(char));
		if (matrix[i] == NULL)
			return (ft_free(matrix));
		ft_strlcpy(matrix[i], s, len + 1);
		s += len;
	}
	return (matrix);
}
// #include <stdio.h>

// int	main()
// {
// 	char	**v;
// 	v = ft_split("Hello World! This is a test.", ' ');
// 	if (v)
// 	{
// 		char **temp = v;
// 		while (*temp)
// 		{
// 			printf("%s\n", *temp);
// 			temp++;
// 		}
// 		ft_free(v);
// 	}
// 	return (0);
// }
