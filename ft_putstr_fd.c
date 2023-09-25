/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:18:38 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*print a string to the file descriptor (fd)*/
void	ft_putstr_fd(char *s, int fd)
{
	int	iterate;

	iterate = 0;
	if (s != 0)
	{
		while (s[iterate])
		{
			ft_putchar_fd(s[iterate], fd);
			iterate++;
		}
	}
}

/*#include <unistd.h>
int main(void)
{
	char *string = "Hola, mundo!";
	int fileDescriptor = 1; // stdout

	ft_putstr_fd(string, fileDescriptor);

	return 0;
}
*/