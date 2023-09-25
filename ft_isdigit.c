/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:02:56 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:11:13 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks if a character is a decimal digit*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("1 significa que es dígito, 0 que no: %i", ft_isdigit(49));
	return (0);
}
*/