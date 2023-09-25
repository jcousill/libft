/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:18:08 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*send number 'n' to given file descriptor*/
void	ft_putnbr_fd(int n, int fd)
{
	long int	copy;

	copy = n;
	if (copy < 0)
	{
		copy = (copy * -1);
		ft_putchar_fd('-', fd);
	}
	if (copy > 9)
	{
		ft_putnbr_fd(copy / 10, fd);
		ft_putchar_fd((copy % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copy + '0', fd);
}

/*#include <stdio.h>

int main(void)
{
	int number;
	int fileDescriptor;

	number = 12345;
	fileDescriptor = 1;

	ft_putnbr_fd(n, fileDescriptor);

	return (0);
}
*/
