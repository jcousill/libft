/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:17:37 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*send string 's' to given file descriptor, followed by line feed*/
void	ft_putendl_fd(char *s, int fd)
{
	if (s != 0 && fd >= 0)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}

/*#include <stdio.h>

int main(void)
{
  char *s = "Hola, mundo!";
  int fd = 1;

  ft_putendl_fd(s, fd);

  return 0;
}
*/