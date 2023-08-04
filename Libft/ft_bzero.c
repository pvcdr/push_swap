/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:25:04 by cxu               #+#    #+#             */
/*   Updated: 2023/05/11 16:29:58 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*La fonction bzero() met à 0 (octets contenant « \0 ») 
les n premiers octets du bloc pointé par s.  */
void	ft_bzero(void *s, int n)
{
	ft_memset(s, 0, n);
}

/*#include <stdlib.h>
#include <stdio.h>

int main()
{
	int test[3] = {1, 2, 3};
	ft_bzero(test, 12);
	int i;
	i = 0;
	while (i < 3)
	{
		printf("%d", test[i]);
		i++;
	}
}*/