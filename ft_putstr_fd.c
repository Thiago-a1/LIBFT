/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:10:42 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/04 17:20:07 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *src, int fd)
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
}
