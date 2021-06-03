/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:32:07 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/03 11:27:16 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = (char *)0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			ret = (char *)str;
		}
		str++;
	}
	return (ret);
}
