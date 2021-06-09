/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:50:15 by jthiago-          #+#    #+#             */
/*   Updated: 2021/06/09 11:27:13 by jthiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_has_beginning(char const *str, char const *set)
{
	int	n;
	int	ret;

	n = ft_strncmp(str, set, ft_strlen(set));
	if (n == 0)
	{
		ret = 1;
	}
	else if (n > 0)
	{
		ret = 0;
	}
	return (ret);
}

static int	ft_has_end(char const *str, char const *set)
{
	int	n;
	int	ret;

	n = ft_strncmp(&(str[ft_strlen(str) - ft_strlen(set)]), set, ft_strlen(set));
	if (n == 0)
	{
		ret = 1;
	}
	else if (n > 0)
	{
		ret = 0;
	}
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		has_begin;
	int		has_end;
	char	*new;

	if (s1 && set)
	{
		has_begin = ft_has_beginning(s1, set);
		has_end = ft_has_end(s1, set);
		if (has_begin == 1 && has_end == 1)
		{
			new = (char *)malloc(sizeof(char) * (ft_strlen(s1) - (ft_strlen(set) * 2)));
			if (!new)
				return (NULL);
			else if (has_begin == 1 && has_end == 1)
				new = ft_substr(s1, ft_strlen(s1) - ft_strlen(set), ft_strlen(s1) - (ft_strlen(set) * 2));
		}
		else if (has_begin == 1 || has_end == 1)
		{
			new = (char *)malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set)));
			if (!new)
				return (NULL);
			else if (has_begin == 1)
				new = ft_substr(s1, ft_strlen(s1) - ft_strlen(set), ft_strlen(s1));
			else if (has_end == 1)
				new = ft_substr(s1, 0, ft_strlen(s1) - ft_strlen(set));
		}
		return (new);
	}
	return (NULL);
}