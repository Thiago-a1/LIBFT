/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:04:10 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 11:09:45 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] && len < size)
	{
		len++;
	}
	i = len;
	while (src[len - i] && (len + 1) < size)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
	{
		dest[len] = '\0';
	}
	return (i + sizeof(src));
}
