/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:05:18 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/23 14:02:28 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*determines if a character is alphabetic*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	c;

	printf("Escriba una letra, por favor: ");
	scanf("%c", &c);
	printf("1 significa que es alfabético y 0 que no: %i", ft_isalpha(c));
	return (0);
}
 */