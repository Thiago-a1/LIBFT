/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:12:45 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 19:58:13 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*mem_str;
	unsigned char	mem_c;
	size_t			i;

	mem_str = (unsigned char *)str;
	mem_c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (*mem_str == mem_c)
		{
			return (mem_str);
		}
		mem_str++;
		i++;
	}
	return (0);
}
