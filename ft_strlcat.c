/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:10:48 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/02 12:35:34 by teguchi          ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const char	*src_cpy = src;
	size_t		size_cpy;

	size_cpy = size;
	if (size != 0)
	{
		while (*dest++ != '\0')
		{
			if (--size_cpy == 0)
				return ((size_t)(ft_strlen(src) + size));
		}
		dest--;
		while (--size_cpy > 0)
		{
			*dest = *src_cpy++;
			if (*dest++ == '\0')
				break ;
		}
		if (size_cpy == 0)
		{
			*dest = '\0';
			return ((size_t)ft_strlen(src));
		}
	}
	return ((size_t)(ft_strlen(src) + size));
}
