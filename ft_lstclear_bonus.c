/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:14:15 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Delete and free the given 'lst' node and all consecutive nodes of that node,
using the 'del' function and free(3). In the end, the pointer to the list must
be NULL*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temporal;

	if (del == 0 || lst == 0 || *lst == 0)
		return ;
	while (lst != 0 && *lst != 0)
	{
		temporal = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temporal;
	}
}

/*#include <stdio.h>

void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	char	*str1 = "Hola";
	char	*str2 = "mundo";

	lst = ft_lstnew(str1);
	ft_lstadd_back(&lst, ft_lstnew(str2));

	ft_lstclear(&lst, ft_del);

	if (lst != NULL)
		printf("La función no funcionó correctamente.\n");
	else
		printf("La función funcionó correctamente.\n");

	return (0);
}

*/