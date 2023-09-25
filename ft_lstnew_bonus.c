/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:15:27 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Create a new node using malloc(3). The member variable 'content' is
initialized with the content of the 'content' parameter. The 'next' variable,
with NULL*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == 0)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*#include "libft.h"

int main()
{
  // Crea una variable para almacenar el nuevo elemento de la lista.
  t_list *new;

  // Crea un nuevo elemento de la lista con el valor "Hola, mundo!".
  new = ft_lstnew("Hola, mundo!");

  // Comprueba si el nuevo elemento de la lista se ha creado correctamente.
  if (new == NULL)
  {
    printf("Error al crear el nuevo elemento de la lista.\n");
    return 1;
  }

  // Imprime el valor del nuevo elemento de la lista.
  printf("%s\n", (char *)new->content);

  // Libera la memoria del nuevo elemento de la lista.
  free(new);

  return 0;
}
*/