/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:21:12 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/10 18:31:27 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_of_words(char const *str, char c)
{
	size_t	i;
	size_t	number;

	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == c || str[i + 1] == '\0') == 1
			&& (str[i] == c || str[i] == '\0') == 0)
		{
			number++;
		}
		i++;
	}
	return (number);
}

static int	ft_line_length(char const *str, char c)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

static void	*ft_free(char **array, int i)
{
	while (i-- > 0)
	{
		free(array[i]);
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words_number;
	char	**array;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	words_number = ft_number_of_words((char *)s, c);
	array = (char **)malloc(sizeof(char) * (words_number + 1));
	if (array == NULL)
		return (NULL);
	while (words_number--)
	{
		while (*s == c && *s != '\0')
			s++;
		array[i] = ft_substr((char *)s, 0, ft_line_length((char *)s, c));
		if (!array[i])
			return (ft_free(array, i));
		s = s + ft_line_length((char *)s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
