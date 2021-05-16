/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:34:48 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/02 18:50:52 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == 0)
		return (dest);
	while (*src)
		*dest++ = (char)*src++;
	*dest = '\0';
	return (dest);
}
