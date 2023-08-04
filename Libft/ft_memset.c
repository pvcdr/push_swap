/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:55:51 by cxu               #+#    #+#             */
/*   Updated: 2023/05/06 10:38:01 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>
/*fills the first n bytes of the memory pointed to by s with a constantt byte c
return value is a pointer to the memory area s*/
void	*ft_memset(void *s, int c, int len)
{
	size_t				i;
	unsigned char		*p;

	p = s;
	i = 0;
	while (len > 0)
	{
		p[i] = c;
		i++;
		len--;
	}
	return (s);
}
/*int main()
{
    char str[] = "Bonjour";

    printf("Array before memset(%s)\n", str);
    //ft_memset(str, 111, 2);
    memset(str, 111, 5);
    printf("Array after memset(%s)\n", str);
    
  
    return 0;
}*/
