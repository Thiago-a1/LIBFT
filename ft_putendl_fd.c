/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:34:15 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/04 17:36:39 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *src, int fd)
{
	int	i;

	i = 0;
	if (src && fd)
	{
		while (src[i])
		{
			ft_putchar_fd(src[i], fd);
			i++;
		}
	}
	ft_putchar_fd('\n', fd);
}
