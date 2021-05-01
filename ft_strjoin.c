/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:59:26 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:47:00 by teguchi          ###   ########.fr       */
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

static void	copy(const char *s, char *dest)
{
	while (*s != '\0')
	{
		*dest = (char)*s;
		s++;
		dest++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == 0)
		return ((char *) NULL);
	copy(s1, dest);
	copy(s2, dest);
	return (dest);
}
