/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:52:11 by cxu               #+#    #+#             */
/*   Updated: 2023/05/15 17:11:22 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len >= (unsigned int)ft_strlen(s + start))
		len = (unsigned int)ft_strlen(s + start);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*#include <stdio.h>

int main()
{
	char *str; 

	str = ft_strdup("0123456789");
	printf("%d", ft_strlen(str));
	printf("%s",ft_substr(str, 9, 7));
	free(str);
}*/
