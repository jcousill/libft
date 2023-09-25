/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:41:25 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:16:53 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*write len bytes of value c (converted to an unsigned character)
 a chain b*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	unsigned char	character;
	size_t			iterate;

	pointer = s;
	character = c;
	iterate = 0;
	while (iterate < n)
	{
		pointer[iterate] = character;
		iterate++;
	}
	return (s);
}

/*#include <stdio.h>

int main()
{
  char str[] = "Hola, mundo!";

  printf("Antes: %s\n", str);

  // Establecer los primeros 5 caracteres de la cadena a 'A'.
  ft_memset(str, 'A', 5);

  printf("Después: %s\n", str);

  return 0;
}
*/