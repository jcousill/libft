/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:00:49 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 21:38:03 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*writes n zero bytes to string s. If n is zero, bzero() does nothing*/
void	ft_bzero(void *s, size_t n)
{
	char			*pointer;
	unsigned long	iterate;

	pointer = (char *)s;
	iterate = 0;
	while (iterate < n)
	{
		pointer[iterate] = 0;
		iterate++;
	}
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[];

	str[] = "Hola, mundo!";
	printf("Antes de ft_bzero: %s\n", str);
	ft_bzero(str, sizeof(str));
	printf("Después de ft_bzero: %s\n", str);
	return (0);
}
 */