/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:59:26 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/02 20:36:07 by teguchi          ###   ########.fr       */
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

static int	ft_copy(const char *s, char *dest, int start)
{
	dest += start;
	while (*s != '\0')
	{
		*dest++ = (char)*s++;
		start++;
	}
	*dest = '\0';
	return (start);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int start;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == 0)
		return ((char *) NULL);
	start = 0;
	start = ft_copy(s1, dest, start);
	start = ft_copy(s2, dest, start);
	return (dest);
}
