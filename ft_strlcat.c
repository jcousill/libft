/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:47:32 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:23:27 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copy and concatenation of limited size strings*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destiny;
	size_t	source;
	size_t	continued;

	destiny = ft_strlen(dst);
	source = ft_strlen(src);
	if (dstsize <= destiny)
		return (source + dstsize);
	continued = destiny;
	while (*src != '\0' && continued < (dstsize - 1))
		*(dst + continued++) = *src++;
	*(dst + continued) = '\0';
	return (destiny + source);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
  char dst[10] = "Hola";
  const char *src = ", mundo!";

  size_t len = ft_strlcat(dst, src, sizeof(dst));

  printf("La cadena dst es '%s' y su longitud es %zu\n", dst, len);

  return 0;
}
*/