/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:30:01 by cxu               #+#    #+#             */
/*   Updated: 2023/05/16 11:54:47 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(*little) || (big == NULL && !len))
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

// #include <stddef.h>
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {

//     // On cherche à lire une ligne de texte à partir du clavier.
//     char buffer[ 255 ];
//     printf( "saisir le mot \"admin\" : \n" );
//     scanf( "%[^\n]", buffer );
//     // Pour supprimer le caractère '\n' du flux pour la prochaine lecture.
//     fgetc( stdin );

//     // Recherche de la présence de la chaîne "admin"dans la saisie.
//     char * result = ft_strnstr( buffer, "admin", 6);

//     // Affichage d'une réponse à l'utilisateur.
//     if ( result == NULL ) {
//         puts( "Vous n'avez pas saisi le mot admin" );
//     } else {
//         puts( "La chaîne contient le mot admin" );
//     }

//     return;
// }