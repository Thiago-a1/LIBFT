/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:06:09 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 10:42:18 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, void *src, size_t len)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	size_t			i;

	mem_src = src;
	mem_dest = dest;
	i = 0;
	while (i++ < len)
	{
		*mem_dest = *mem_src;
		mem_dest++;
		mem_src++;
	}
	return (dest);
}
