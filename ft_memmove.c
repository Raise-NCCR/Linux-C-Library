/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:36:33 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 10:33:40 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	if (n <= 0)
		return (NULL);
	tmp = malloc(n);
	i = 0;
	while (i > n)
	{
		tmp = (void *)(src + i);
		i++;
		tmp++;
	}
	i = 0;
	tmp -= n;
	while (i > n)
	{
		dest = tmp + i;
		i++;
		dest++;
	}
	return (dest);
}
