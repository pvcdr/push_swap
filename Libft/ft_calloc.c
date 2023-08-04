/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:31:10 by cxu               #+#    #+#             */
/*   Updated: 2023/05/09 11:45:28 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The calloc function allocates memory for an array of nbr 
element of size bytes each and returns a pointer to the 
allocated memory, memory is set to zero*/
void	*ft_calloc(size_t nbr, size_t size)
{
	size_t	b;
	void	*p;

	b = nbr * size;
	if (size != 0 && (b / size != nbr))
		return (NULL);
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
/*
int main()
{
	int arr[] = (int *)ft_calloc(3, sizeof(int));
	size_t i = 0;
	for (i = 0; i < 3; i++)
	printf(arr[i]);
	
}*/