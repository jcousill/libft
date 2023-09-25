/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:14:04 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*add node 'new' to the beginning of list 'lst'*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*#include <stdlib.h>
int main()
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew("Hello, world!");

	// Agregue el nuevo elemento al principio de la lista.
	ft_lstadd_front(&lst, new);

	// Imprime el primer elemento de la lista.
	printf("%s\n", lst->content);

	// Libera la lista.
	ft_lstclear(&lst, free);

	return 0;
}
*/
