/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:23:37 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copy source string (src) to destination (dst) with limit (dstsize)*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	iterate;
	size_t	length;

	if (dstsize > 0)
	{
		length = ft_strlen(src);
		iterate = 0;
		while (iterate < (dstsize - 1) && src[iterate] != '\0')
		{
			dst[iterate] = src[iterate];
			iterate++;
		}
		dst[iterate] = '\0';
	}
	else
		length = ft_strlen(src);
	return (length);
}

/*#include <stdio.h>

int main()
{
  char dst[10];
  const char *src = "Hola mundo!";

  // Copiamos la cadena `src` al destino `dst`, asegurándonos de no sobrepasar
  // el tamaño del destino.
  size_t length = ft_strlcpy(dst, src, sizeof(dst));

  // Imprimimos la cadena copiada.
  printf("%s\n", dst);

  // Imprimimos la longitud de la cadena original.
  printf("Longitud de la cadena original: %zu\n", length);

  return 0;
}
*/