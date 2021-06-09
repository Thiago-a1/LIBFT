/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:18:30 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/04 11:21:16 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (to_find == 0 || str == to_find)
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(&str[i], to_find, len - i + 1))
			{
				return ((char *)str);
			}
		}
		i++;
	}
	return (NULL);
}
