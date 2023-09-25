/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:15:52 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*find the first occurrence of a specific byte in a memory region*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	size_t			current;

	string = (unsigned char *)s;
	current = 0;
	while (current < n)
	{
		if (string[current] == (unsigned char)c)
			return ((void *)&string[current]);
		current++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main()
{
  char str[] = "Hola mundo!";
  int c = 'o';
  size_t n = sizeof(str) - 1;

  void *ptr = ft_memchr(str, c, n);

  if (ptr == NULL)
  {
    printf("El caracter '%c' no se encontró en la cadena '%s'.\n", c, str);
  } else {
    printf("El caracter '%c' se encontró en la cadena '%s' 
	en la posición %ld.\n", c, str, ptr - str);
  }
  
  return 0;
}
*/