/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:14:39 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Takes an 'lst' node as a parameter and frees the memory of the content
using the 'del' function given as a parameter, in addition to releasing 
the node. The 'next' memory should not be freed*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != 0)
	{
		del(lst->content);
		free(lst);
	}
}

/*void del(void *content)
{
	free(content);
}

int main()
{
	t_list *lst = ft_lstnew("Hola");

	ft_lstdelone(lst, del);

	return 0;
}
*/