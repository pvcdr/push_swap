/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:44:36 by cxu               #+#    #+#             */
/*   Updated: 2023/07/26 13:08:51 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	int		signe;
	long	nombre;
	int		i;

	i = 0;
	nombre = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nombre = nombre * 10 + str[i] - 48;
		i++;
	}
	return (nombre * signe);
}

/*
#include <stdio.h>
int main()
{
	char s[] = "+1234ab567";
	printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
	return (0);
}*/