/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:34:31 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:23:54 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*calculate the length of a character string*/
size_t	ft_strlen(const char *str)
{
	size_t	iterate;

	iterate = 0;
	while (str[iterate] != '\0')
		iterate++;
	return (iterate);
}

/*#include <stdio.h>
int main()
{
  char *str = "Hola, mundo!";
  size_t len;

  len = ft_strlen(str);

  printf("La longitud de la cadena \"%s\" es %zu.\n", str, len);

  return 0;
}
*/
