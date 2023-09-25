/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:24:56 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*compares no more than n characters. Because strncmp() is designed to compare
strings instead of binary data, the characters that appear after
of a character `\0' are not compared*/
int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			iterate;
	unsigned int	difference;

	iterate = 0;
	while (iterate < c && str[iterate] != '\0' && str2[iterate] != '\0')
	{
		difference = (unsigned char)str[iterate] - (unsigned char)str2[iterate];
		if (difference != 0)
			return (difference);
		iterate++;
	}
	if (iterate < c)
		return ((unsigned char)str[iterate] - (unsigned char)str2[iterate]);
	return (0);
}

/*#include <stdio.h>

int main()
{
  char str1[] = "Hello, world!";
  char str2[] = "Goodbye, world!";

  printf("ft_strncmp(\"%s\", \"%s\", 10)
  = %d\n", str1, str2, ft_strncmp(str1, str2, 10));
  printf("ft_strncmp(\"%s\", \"%s\", 5)
  = %d\n", str1, str2, ft_strncmp(str1, str2, 5));

  return 0;
}
*/