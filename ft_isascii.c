/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:03:15 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:11:00 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*checks if it is a valid ASCII character*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	c;
	printf("Escriba un valorASCII válido, por favor: ");
	scanf("%c", &c);
	printf("1 significa que es alfabético y 0 que no: %i", ft_isascii(c));
	return (0);
}
*/