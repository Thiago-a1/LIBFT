/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:18:30 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/14 12:42:24 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	to_find_size;

	i = 0;
	to_find_size = ft_strlen(to_find);
	if (!(*to_find))
	{
		return ((char *)str);
	}
	while (*str && (i < len))
	{
		if ((ft_strncmp(str, to_find, to_find_size) == 0)
			&& (i + to_find_size <= len))
			return ((char *)str);
		str++;
		i++;
	}
	return (NULL);
}
