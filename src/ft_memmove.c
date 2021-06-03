/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:10:47 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 10:45:23 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;

	mem_src = src;
	mem_dest = dest;
	if (mem_dest > mem_src)
	{
		while (len-- > 0)
		{
			mem_dest[len] = mem_src[len];
		}
	}
	else
	{
		ft_memcpy(mem_dest, mem_src, len);
	}
	return (dest);
}
