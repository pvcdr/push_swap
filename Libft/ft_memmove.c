/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:03:13 by cxu               #+#    #+#             */
/*   Updated: 2023/05/16 11:39:31 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	if (dest == NULL && src == NULL)
		return (NULL);
	len = 0;
	if (src < dest)
	{
		len = n;
		while (len--)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dest);
}
/*
int main()
{
	int i = 0;
	int src[5] = {1, 2, 3, 4, 5};
	int dest[8] = {10, 11, 0, 0, 5 ,0 ,0 ,0};
	memmove(&dest[1], &src[0], 12); // attention position envoie;
	for (i = 0; i < 8; i++)
	printf("%d\n", dest[i]);
	printf("VRAI FONCTION\n");
	i = 0;
	int src1[5] = {1, 2, 3, 4, 5};
	int dest1[8] = {10, 11, 0, 0, 5 ,0 ,0 ,0};
	ft_memmove(&dest1[1], &src1[0], 12);
	for (i = 0; i < 8; i++)
	printf("%d\n", dest1[i]);

}*/