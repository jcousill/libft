/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:50:52 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Reserve space in memory (with malloc(3)) and return a copy of 's1' with
 characters specified in 'set' removed from start and string
 of characters*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;

	if (s1 == 0 || set == 0)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	length = ft_strlen(s1);
	while (length && ft_strchr(set, s1[length]))
		length--;
	return (ft_substr(s1, 0, length + 1));
}

/*#include <stdio.h>

int main()
{
    char const *s1 = "  hello, world!  ";
    char const *set = " ";

    char *trimmed_str = ft_strtrim(s1, set);

    printf("String after trimming: %s\n", trimmed_str);

    free(trimmed_str);

    return 0;
}
*/