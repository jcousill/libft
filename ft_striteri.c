/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:32:58 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:22:32 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*To each character of the string 's' apply the function 'f' giving the
 index of each character in 's' and the direction of the character, 
 which can be modified*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	iterate;

	iterate = 0;
	if (s == 0 || f == 0)
		return ;
	while (s[iterate] != '\0')
	{
		f(iterate, &s[iterate]);
		iterate++;
	}
}

/*#include <stdio.h>

void print_char(unsigned int i, char *c)
{
	printf("%c", *c);
}

int main()
{
	char str[] = "Hola, mundo!";

	ft_striteri(str, print_char);

	printf("\n");

	return 0;
}
*/