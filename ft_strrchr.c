/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:32:07 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 19:14:31 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;
	int		len;

	ret = (char *)0;
	len = ft_strlen(str);
	if (c == '\0')
	{
		return ((char *)str + len);
	}
	while (*str)
	{
		if (*str == c)
		{
			ret = (char *)str;
		}
		str++;
	}
	return (ret);
}
