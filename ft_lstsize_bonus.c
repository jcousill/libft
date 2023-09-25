/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:15:40 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*count elements in a linked list*/
int	ft_lstsize(t_list *lst)
{
	int	number;

	number = 0;
	while (lst != 0)
	{
		number++;
		lst = lst->next;
	}
	return (number);
}

/*#include <stdio.h>

int main()
{
  t_list *lst = NULL;

  // Añadimos algunos elementos a la lista
  ft_lstadd_back(&lst, ft_lstnew("Hola"));
  ft_lstadd_back(&lst, ft_lstnew("mundo"));

  // Imprimimos el tamaño de la lista
  printf("El tamaño de la lista es: %d\n", ft_lstsize(lst));

  // Liberamos la memoria de la lista
  ft_lstclear(&lst, free);

  return 0;
}
*/
