/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:05:05 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/09 10:15:01 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getlength(int n)
{
	int lenght;

	lenght = 0;
	while (n /= 10)
	{
		if (n < 0)
		{
			lenght++;
		}
		if (n /= 10)
		{
			n = n / 10;
			lenght++;
		}
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*new;
	if (!n)
	{
		return (NULL);
	}
	if (!(new = malloc(sizeof(char) * (ft_getlength(n) + 1))))
	{
		return (NULL);
	}

}