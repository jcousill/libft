/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:17:13 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*write a character on the screen*/
void	ft_putchar_fd(char c, int fd)
{
	char	character;
	size_t	result;

	character = c;
	result = 0;
	if (fd >= 0)
	{
		result = write(fd, &character, 1);
	}
}

/*int main(void)
{
  ft_putchar_fd('a', 1);
  return 0;
}
*/