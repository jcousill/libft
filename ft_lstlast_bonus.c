/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:15:03 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*returns the last node in the list*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pointer;

	pointer = lst;
	if (pointer == 0)
		return (NULL);
	if (pointer->next == 0)
		return (pointer);
	while (pointer->next)
	{
		if (pointer->next == 0)
			return (pointer);
		pointer = pointer->next;
	}
	return (pointer);
}

/*#include <stdio.h>

int main()
{
	t_list *lst;
	t_list *element;

	// Crear una lista con algunos elementos
	lst = ft_lstnew("Primer elemento");
	element = ft_lstnew("Segundo elemento");
	ft_lstadd_back(&lst, element);
	element = ft_lstnew("Tercer elemento");
	ft_lstadd_back(&lst, element);

	// Imprimir el último elemento de la lista
	printf("El último elemento de la lista es: %s\n", ft_lstlast(lst)->content);

	return 0;
}
*/