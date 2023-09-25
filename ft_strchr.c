/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:21:30 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*locate the character in the string*/
char	*ft_strchr(const char *s, int c)
{
	char	*string;

	string = (char *)s;
	while (*string)
	{
		if (*string == (char)c)
			return (string);
		string++;
	}
	if (*string == (char)c)
		return (string);
	return (NULL);
}

/*#include <stdio.h>

int main()
{
    char *s = "Hola, mundo!";
    int c = 'o';

    char *result = ft_strchr(s, c);

    if (result != 0)
	{
        printf("El primer carácter '%c' en la cadena 
			'%s' es '%s'.\n", c, s, result);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena '%s'.\n", c, s);
    }

    return 0;
}
*/