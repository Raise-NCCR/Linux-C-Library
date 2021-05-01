/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:21:38 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:53:48 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int		i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	is_in_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (dest == 0)
		return ((char *) NULL);
	i = 0;
	while (*s1 != '\0')
	{
		if (is_in_set(*s1, set))
		{
			s1++;
			continue ;
		}
		dest[i] = *s1;
		i++;
	}
	i--;
	while (is_in_set(dest[i], set))
	{
		dest[i] = '\0';
		i--;
	}
	return (dest);
}
