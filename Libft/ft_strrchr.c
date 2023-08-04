/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:24:14 by cxu               #+#    #+#             */
/*   Updated: 2023/05/09 11:39:14 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (&((char *)s)[i]);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		--i;
	}
	return (NULL);
}

/*int main() {

    // Le nom du fichier d'origine
    const char * originalFilename = "folder/image.jpg";

    // On prépare le nom du fichier de destination
    size_t size = strlen( originalFilename ) + 1;   // +1 pour le zéro terminal
    char * destinationFilename = (char *) malloc( size );
    strcpy( destinationFilename, originalFilename );

    // Et on y remplace l'extension du fichier par l'extension .png
    char * lastDotPos = ft_strrchr( destinationFilename, '.' );
    strcpy( lastDotPos, ".png" );

    // On affiche les deux noms de fichiers
    puts( originalFilename );
    puts( destinationFilename );

    return EXIT_SUCCESS;
}*/