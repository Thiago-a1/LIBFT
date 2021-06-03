/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:12:45 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 10:40:27 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(void *str, int c, size_t len)
{
	unsigned char	*mem_str;
	unsigned char	mem_c;
	int				i;

	mem_str = str;
	mem_c = c;
	i = 0;
	while (mem_str[i] < len)
	{
		if (mem_str[i] == mem_c)
		{
			return (&mem_str[i]);
		}
		i++;
	}
	return (0);
}
