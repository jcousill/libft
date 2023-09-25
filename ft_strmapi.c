/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:24:23 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Application of the function 'f' to each character of the string 's'. 
In his first argument, 'f' receives the position of the character, a new 
string must be created of characters (with malloc(3)) to store the character
 returned by 'f'*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	iterate;
	char			*mapi;

	size = ft_strlen(s);
	iterate = 0;
	mapi = malloc(size + 1);
	if (mapi == 0)
		return (NULL);
	while (iterate < size)
	{
		mapi[iterate] = f(iterate, s[iterate]);
		iterate++;
	}
	mapi[size] = '\0';
	return (mapi);
}

/*#include <stdio.h>
#include <stdlib.h>

char touppercase(unsigned int i, char c)
{
	return (c + 'A' - 'a');
}

int main(void)
{
	char *str = "hello world!";
	char *new_str = ft_strmapi(str, touppercase);

	if (new_str == NULL)
	{
		printf("Error allocating memory\n");
		return (1);
	}

	printf("New string: %s\n", new_str);
	free(new_str);

	return (0);
}
*/