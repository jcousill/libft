/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:50:35 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 21:31:47 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Reserve enough memory space to accommodate 'n' elements of
size 'size' and value zero*/
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*address;

	address = malloc(nitems * size);
	if (address == 0)
		return (NULL);
	ft_bzero(address, size * nitems);
	return (address);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int	*array = ft_calloc(10, sizeof(int));
	if (array == NULL)
	{
		printf("Error al asignar memoria\n");
		return (1);
	}
	// Probar que la memoria se ha asignado correctamente
	for (int i = 0; i < 10; i++)
	{
		if (array[i] != 0)
		{
			printf("Error al inicializar la memoria\n");
			return (1);
		}
	}
	// Liberar la memoria asignada
	free(array);
	return (0);
}
 */