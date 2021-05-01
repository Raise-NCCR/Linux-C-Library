/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:24:49 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/01 15:25:56 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d_cpy;
	const char	*s_cpy;

	if (dest == 0 && src == 0)
		return (dest);
	d_cpy = (char *)dest;
	s_cpy = (const char *)src;
	while (n--)
		*d_cpy++ = *s_cpy++;
	return (dest);
}
