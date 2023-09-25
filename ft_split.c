/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcousill <jcousill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:12 by jcousill          #+#    #+#             */
/*   Updated: 2023/09/24 16:10:38 by jcousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function to count how many substrings can be formed from 's1'
 using 'c' as a delimiter*/
static int	num_string(char const *string1, char character)
{
	int	compare;
	int	cles;

	compare = 0;
	cles = 0;
	if (*string1 == '\0')
		return (0);
	while (*string1 != '\0')
	{
		if (*string1 == character)
			cles = 0;
		else if (cles == 0)
		{
			cles = 1;
			compare++;
		}
		string1++;
	}
	return (compare);
}

/*Function to count how many characters are in a substringfrom 's2' until 
'c' or the end of the string is found*/
static int	num_char(char const *string2, char character, int iterate)
{
	int	length;

	length = 0;
	while (string2[iterate] != character && string2[iterate] != '\0')
	{
		length++;
		iterate++;
	}
	return (length);
}

/*Memory release function*/
static char	**freee(const char**destiny, int iterate)
{
	while (iterate > 0)
	{
		iterate--;
		free((void *)destiny[iterate]);
	}
	free(destiny);
	return (NULL);
}

/*Function to assign the substrings to the 'dst' array*/
static char	**affect(char const *string, char **destiny,
		char character, int large)
{
	int	iterate;
	int	iterate1;
	int	iterate2;

	iterate = 0;
	iterate1 = 0;
	while (string[iterate] != '\0' && iterate1 < large)
	{
		iterate2 = 0;
		while (string[iterate] == character)
			iterate++;
		destiny[iterate1] = (char *)malloc(sizeof(char)
				* (num_char(string, character, iterate) + 1));
		if (destiny[iterate1] == NULL)
			return (freee((const char **)destiny, iterate1));
		while (string[iterate] != '\0' && string[iterate] != character)
			destiny[iterate1][iterate2++] = string[iterate++];
		destiny[iterate1][iterate2] = '\0';
		iterate1++;
	}
	destiny[iterate1] = 0;
	return (destiny);
}

/*Main function to split a string 's' in an array of strings 
using 'c' as a delimiter*/
char	**ft_split(char const *s, char c)
{
	char	**destiny;
	int		large;

	if (s == 0)
		return (NULL);
	large = num_string(s, c);
	destiny = (char **)malloc(sizeof(char *) * (large + 1));
	if (destiny == 0)
		return (NULL);
	return (affect(s, destiny, c, large));
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char *s = "This is a string to be split.";
  char c = ' ';

  char **split_strings = ft_split(s, c);

  if (split_strings == NULL)
  {
    printf("Error allocating memory for split strings.\n");
    return 1;
  }

  int i = 0;
  while (split_strings[i] != NULL)
  {
    printf("%s\n", split_strings[i]);
    i++;
  }

  free(split_strings);

  return 0;
}
 */
