/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:05:33 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:42:45 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!s2[i])
			return ((int)s1[i]);
		else if (s1[i] != s2[i])
			return ((int)s1[i] - s2[i]);
		i++;
	}
	if (!s1[i] && s2[i])
		return ((int)-s2[i]);
	return (0);
}

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			if (ft_strcmp(&big[i], little) == 0)
				return ((char *)little);
		}
	}
	return ((char *) NULL);
}
