/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:33:56 by cxu               #+#    #+#             */
/*   Updated: 2023/05/11 17:14:00 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <assert.h>
#include <string.h>

int main()
{

    int arr1 [] = { 54, 85, 20, 63, 21 };
    int arr2 [] = { 54, 85, 19, 63, 21 };
    size_t size = sizeof( int ) * 5;

    assert(memcmp( arr1, arr2, size) == ft_memcmp( arr1, arr2, size));       
    assert(memcmp( arr1, arr1, size) == ft_memcmp( arr1, arr1, size));       
    assert(memcmp( arr2, arr1, size) == ft_memcmp( arr2, arr1, size));       
    
    printf( "Test is ok\n" );
    
    return 0;
}*/
