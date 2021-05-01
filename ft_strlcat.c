/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:10:48 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:54:00 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		dest_len;
	int		src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = (size_t)ft_strlen(dest);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0' || i == size - 1)
		dest[i] = '\0';
	else
		dest[i - 1] = '\0';
	return ((size_t)(dest_len + src_len));
}
