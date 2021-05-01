/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:14:26 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:51:41 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*strrchr(const char *s, int c)
{
	char	*last_c;

	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	last_c = (char *)malloc(sizeof(char) * 1);
	last_c = (char *) NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_c = (char *)s;
		s++;
	}
	return (last_c);
}
