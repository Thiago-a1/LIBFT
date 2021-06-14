/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:05:05 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/10 18:38:23 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(char *str,
						 size_t size,
						 unsigned int num,
						 unsigned int is_negative)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (num % 10) + 48;
		num /= 10;
	}
	if (is_negative)
	{
		str[0] = '-';
	}
	return (str);
}

static int	ft_getlength(int n)
{
	int	lenght;

	lenght = 1;
	if (n < 0)
	{
		lenght++;
	}
	n /= 10;
	while (n)
	{
		n /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	size_t			n_digits;
	unsigned int	is_negative;
	char			*new;

	n_digits = ft_getlength(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	new = malloc(sizeof(char) * (n_digits + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	return (ft_convert(new, n_digits, (unsigned int)n, is_negative));
}
