/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:43:58 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/05 10:33:51 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (substring == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		if (ft_strlen(s) > start)
		{
			substring[i] = s[start];
			start++;
		}
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
