/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:08:24 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 10:33:44 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t len)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	size_t			i;

	mem_src = src;
	mem_dest = dest;
	i = 0;
	while (i < len)
	{
		*mem_dest++ = *mem_src++;
		if (*mem_src == (unsigned char)c)
		{
			return (dest);
		}
		i++;
	}
	return (NULL);
}
