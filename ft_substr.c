/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:28:16 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Reserve space in memory (with malloc(3)) and return the substring of
's'. The substring starts at 'start' and has a maximum length of 'len'.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	length;

	if (s == 0)
		return (NULL);
	length = ft_strlen(s);
	if (length < start)
		return (ft_strdup(""));
	length = ft_strlen(s + start);
	if (length < len)
		len = length;
	substring = (char *)malloc (sizeof(char) * len + 1);
	if (substring == 0)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
  char const *s = "Hola mundo!";
  unsigned int start = 6;
  size_t len = 5;

  char *substring = ft_substr(s, start, len);

  printf("%s\n", substring);

  free(substring);

  return 0;
}
*/
