/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:34:12 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/02 00:03:58 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*src_cpy;

	src_cpy = src;
	if (size != 0)
	{
		while (--size > 0)
		{
			if ((*dest++ = *src_cpy++) == '\0')
				break ;
		}
		if (size == 0)
			*dest = '\0';
	}
	return ((size_t)ft_strlen(src));
}
