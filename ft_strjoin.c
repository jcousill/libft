/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/22 18:22:51 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*join two chains*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length1;
	size_t	length2;
	char	*destiny;

	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	destiny = (char *)malloc ((length1 + length2 + 1) * sizeof(char));
	if (destiny == 0)
		return (NULL);
	ft_strlcpy(destiny, s1, length1 + 1);
	ft_strlcat(destiny, s2, (length1 + length2 + 1));
	return (destiny);
}

/*#include <stdio.h>

int main(void)
{
	char *str1 = "Hola, ";
	char *str2 = "mundo!";
	char *joined_str;

	joined_str = ft_strjoin(str1, str2);
	if (joined_str == NULL)
	{
		printf("Error al unir las cadenas.\n");
		return 1;
	}

	printf("La cadena unida es: '%s'\n", joined_str);

	free(joined_str);

	return 0;
}
*/
