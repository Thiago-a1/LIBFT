/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:41:34 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/11 17:25:48 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		|| c == '\r'
		|| c == '\f'
		|| c == '\n')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 0;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str++ - 48);
	}
	if (negative)
	{
		return (res * -1);
	}
	return (res);
}
