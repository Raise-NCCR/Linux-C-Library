/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:36:33 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/01 16:08:52 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s_cpy;
	char	*d_cpy;

	if ((dest == 0 && src == 0) || n == 0)
		return (dest);
	s_cpy = (const char *)src;
	d_cpy = (char *)dest;
	if (dest > src)
	{
		s_cpy += n - 1;
		d_cpy += n - 1;
		while (n--)
			*d_cpy-- = *s_cpy--;
		return (dest);
	}
	while (n--)
		*d_cpy++ = *s_cpy++;
	return (dest);
}
