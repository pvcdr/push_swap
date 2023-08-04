/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:36:18 by cxu               #+#    #+#             */
/*   Updated: 2023/05/11 16:46:32 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)

{
	char	*str;
	int		j;

	str = malloc (sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s[j])
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*#include <stdio.h>
int main()
{
	char *test = "";
	char *dup  = "Bonjour";
	printf("La chaine test avant strdup = %s\n", test);
	test = ft_strdup(dup);
	printf("La chaine test apres strdup = %s", test);
}*/