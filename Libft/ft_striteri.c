/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:26:27 by cxu               #+#    #+#             */
/*   Updated: 2023/05/16 12:16:03 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	int		i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>

void my_func(unsigned int index, char *c)
{
    (*c)++;
}

void test_ft_striteri()
{
    char test_string[] = "abc";
    
    printf("Before: %s\n", test_string);
    ft_striteri(test_string, &my_func);
    printf("After: %s\n", test_string);
    // Expected output: "bcd"
}

int main()
{
    test_ft_striteri();
    return 0;
}*/