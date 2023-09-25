/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:16:40 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copies len bytes from string src to string dst. The two chains can
 overlap; copying is always done in a non-destructive way*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*temporal;
	char	*destiny;

	temporal = (char *)src;
	destiny = (char *)dst;
	if (temporal < destiny)
	{
		while (n--)
			destiny[n] = temporal[n];
	}
	else
		ft_memcpy(destiny, temporal, n);
	return (dst);
}

/*#include "libft.h"

int main()
{
  char src[] = "Hola mundo!";
  char dst[12];

  // Copiamos los primeros 5 bytes de src a dst, 
  // superponiendo los últimos 2 bytes.
  ft_memmove(dst, src, 5);

  // Imprimimos el contenido de dst.
  printf("%s\n", dst);

  return 0;
}

*/