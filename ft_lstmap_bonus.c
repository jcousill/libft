/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/23 15:19:13 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Iterates the list 'lst' and applies the function 'f' to the content of each
node. Create a list resulting from the correct and successive application
of the function 'f' on each node. The 'del' function is used to
delete the contents of a node, if necessary*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*changed_list;
	t_list	*last_node;
	t_list	*changed_node;

	changed_list = 0;
	last_node = 0;
	if (lst == 0 || f == 0)
		return (NULL);
	while (lst != 0)
	{
		changed_node = ft_lstnew(NULL);
		if (changed_node == 0)
		{
			ft_lstclear(&changed_list, del);
			return (NULL);
		}
		changed_node->content = f(lst->content);
		if (changed_list == 0)
			changed_list = changed_node;
		else
			last_node->next = changed_node;
		last_node = changed_node;
		lst = lst->next;
	}
	return (changed_list);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*lst;
	t_list	*changed_list;
	void	*(*f)(void *) = ft_strdup;
	void	(*del)(void *) = free;

	lst = ft_lstnew("Hola");
	lst->next = ft_lstnew("mundo");

	changed_list = ft_lstmap(lst, f, del);

	while (changed_list)
	{
		printf("%s\n", changed_list->content);
		changed_list = changed_list->next;
	}

	ft_lstclear(&lst, del);
	ft_lstclear(&changed_list, del);

	return (0);
}
*/