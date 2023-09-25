/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:25:12 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*locate a substring in a string*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	iterate;
	int				iterate1;

	iterate1 = 0;
	iterate = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[iterate])
	{
		iterate1 = 0;
		while (haystack[iterate] == needle[iterate1]
			&& haystack[iterate] != 0 && iterate < len)
		{
			iterate++;
			iterate1++;
		}
		if (needle[iterate1] == 0)
			return ((char *)&haystack[iterate - iterate1]);
		iterate = (iterate - iterate1) + 1;
	}
	return (NULL);
}

/*#include <stdio.h>

int main(void)
{
	char *haystack = "Hola mundo!";
	char *needle = "mundo";
	size_t len = 10;

	char *result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
	{
		printf("La subcadena '%s' se encuentra en la cadena '%s' 
		a partir de la posición %d.\n", needle, haystack, result - haystack);
	} else {
		printf("La subcadena '%s' no se encuentra en la 
		cadena '%s'.\n", needle, haystack);
	}

	return 0;
}
*/