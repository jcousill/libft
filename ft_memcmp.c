/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:16:05 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*compares byte string s1 with byte string s2. It is assumed that both
 strings are n bytes long*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			iterate;
	unsigned char	*pointer1;
	unsigned char	*pointer2;

	if (n == 0)
		return (0);
	pointer1 = (unsigned char *)s1;
	pointer2 = (unsigned char *)s2;
	iterate = 0;
	while (*pointer1 == *pointer2 && ++iterate < n)
	{
		pointer1++;
		pointer2++;
	}
	return ((int)(*pointer1 - *pointer2));
}

/*#include <stdio.h>

int main()
{
  char str1[] = "Hola";
  char str2[] = "Hola mundo";

  int result = ft_memcmp(str1, str2, sizeof(str1));

  if (result == 0)
  {
    printf("Las cadenas son iguales.\n");
  } else {
    printf("Las cadenas son diferentes.\n");
  }

  return 0;
}
*/