/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:22:46 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:54:23 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		s = "\0";
		i++;
		s++;
	}
}

void	*calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (size <= 0)
		return (NULL);
	dest = malloc(size * nmemb);
	ft_bzero(dest, size);
	return (dest);
}
