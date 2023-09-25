/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:52:15 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:22:06 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*save a copy of a character string*/
char	*ft_strdup(const char *src)
{
	int		iterate;
	int		length;
	char	*pointer;

	iterate = 0;
	length = ft_strlen(src);
	pointer = (char *)malloc(sizeof(char) * (length + 1));
	if (pointer == 0)
		return (NULL);
	while (iterate < length)
	{
		pointer[iterate] = src[iterate];
		iterate++;
	}
	pointer[iterate] = '\0';
	return (pointer);
}

/*#include <stdio.h>

int main()
{
  char *src = "Hola, mundo!";
  char *dup = ft_strdup(src);

  if (dup == NULL)
  {
    printf("Error al duplicar la cadena.\n");
    return 1;
  }

  printf("La cadena duplicada es: %s\n", dup);

  free(dup);

  return 0;
}
*/