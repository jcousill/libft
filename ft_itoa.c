/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/24 16:12:30 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*with malloc(3) generates a string that represents an integer
 value as an argument, the negatives are managed*/
static void	convert_to_string(long number, char *string, int *iterate)
{
	if (number >= 10)
	{
		convert_to_string(number / 10, string, iterate);
		convert_to_string(number % 10, string, iterate);
	}
	else
		string[(*iterate)++] = number + '0';
}

static size_t	int_length(int number)
{
	size_t	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length = length + 1;
	while (number)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		iterate;

	string = malloc(sizeof(char) * (int_length(n) + 1));
	if (string == 0)
		return (NULL);
	iterate = 0;
	if (n == -2147483648)
	{
		string[iterate++] = '-';
		string[iterate++] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		string[iterate++] = '-';
		n *= -1;
	}
	convert_to_string(n, string, &iterate);
	string[iterate] = '\0';
	return (string);
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = -12345;
  char *str = ft_itoa(n);

  if (str == NULL)
  {
    printf("Error asignando memoria.\n");
    return 1;
  }

  printf("El número %d convertido a string es: %s\n", n, str);

  free(str);

  return 0;
}
*/