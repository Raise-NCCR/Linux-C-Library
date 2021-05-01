/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:14:12 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/01 15:47:35 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	c_cpy;
	unsigned char	*d_cpy;
	const unsigned char	*s_cpy;

	if (n == 0)
		return (NULL);
	d_cpy = (unsigned char *)dest;
	s_cpy = (const unsigned char *)src;
	c_cpy = (unsigned char)c;
	while (n--)
	{
		*d_cpy++ = *s_cpy++;
		dest++;
		if (*(s_cpy - 1) == c_cpy)
		{
			s_cpy++;
			return (dest);
		}
	}
	return (NULL);
}
