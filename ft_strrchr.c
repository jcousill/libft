/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 20:50:39 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*locates the first occurrence of c (converted to char) in the string
pointed out by s. The trailing null character is considered part of the string;
therefore, if c is `\0', the function locates the ending `\0'*/
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	iterate;
	char			*last;

	last = NULL;
	iterate = 0;
	while (s[iterate])
	{
		if (s[iterate] == (char)c)
			last = (char *)&s[iterate];
		iterate++;
	}
	if ((char)c == s[iterate])
		return ((char *)&s[iterate]);
	return (last);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
  char *str = "Este es un string de prueba.";
  char c = 'a';

  char *result = ft_strrchr(str, c);

  if (result != NULL) 
    printf("El último carácter '%c' encontrado en el string '%s'
     es en la posición %ld.\n", c, str, result - str);
  else
    printf("El carácter '%c' no se encontró en el string '%s'.\n", c, str);
  return 0;
}

*/