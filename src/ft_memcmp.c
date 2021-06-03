/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:15:56 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 10:41:21 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	unsigned char	*mem_str1;
	unsigned char	*mem_str2;
	size_t			i;

	mem_str1 = str1;
	mem_str2 = str2;
	i = 0;
	while (i < n)
	{
		if (mem_str1[i] != mem_str2[i])
		{
			return (mem_str1[i] - mem_str2[i]);
		}
		i++;
	}
	return (0);
}
