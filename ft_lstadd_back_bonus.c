/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:13:51 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*adds a node 'new' to the end of the list 'lst'*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temporal;

	if (lst != 0)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			temporal = ft_lstlast(*(lst));
			temporal->next = new;
		}
	}
}

/*#include <stdlib.h>
int main(void)
{
	t_list *head = NULL;

	// Crear un nuevo elemento de la lista.
	t_list *new = malloc(sizeof(t_list));
	new->data = 10;
	new->next = NULL;

	// Agregar el nuevo elemento al final de la lista.
	ft_lstadd_back(&head, new);

	// Imprimir el contenido de la lista.
	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}

	return (0);
}
*/