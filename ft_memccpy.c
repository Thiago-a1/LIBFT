/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:08:24 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/04 10:02:18 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest,const void *src, int c, size_t len)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	size_t			i;

	mem_src = (unsigned char *)src;
	mem_dest = (unsigned char *)dest;
	i = 0;
	while (i < len)
	{
		mem_dest[i] = mem_src[i];
		if (mem_src[i] == (unsigned char)c)
		{
			return ((void *)mem_dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
