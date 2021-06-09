/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:34:59 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/05 11:05:43 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if(s1 && s2)
	{
		new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
		if (new == NULL)
		{
			return (NULL);
		}
		while (s1[i])
		{
			new[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			new[i] = s2[j];
			j++;
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}