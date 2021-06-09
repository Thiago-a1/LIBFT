/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:53:37 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/05 19:05:16 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	n;
	char	*new;

	if (s)
	{
		i = 0;
		n = 0;
		new = malloc(sizeof(char) * ft_strlen(s) + 1);
		if (!new)
		{
			return (NULL);
		}
		while (s[i])
		{
			new[n] = f(i, s[i]);
			i++;
			n++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
