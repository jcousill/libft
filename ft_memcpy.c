/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:16:16 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copy memory address, handling overlaps*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	iterate;

	iterate = 0;
	destiny = (char *)dst;
	source = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (iterate < n)
	{
		destiny[iterate] = source[iterate];
		iterate++;
	}
	return (dst);
}

/*#include <stdio.h>

int main()
{
  char src[] = "Hola, mundo!";
  char dst[20];

  ft_memcpy(dst, src, sizeof(src));

  printf("%s\n", dst);

  return 0;
}
*/