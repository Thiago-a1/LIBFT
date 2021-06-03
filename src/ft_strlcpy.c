/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:13:50 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 11:10:21 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;

	i = 0;
	size -= 1;
	while (src[i] && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
