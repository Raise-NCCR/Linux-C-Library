/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:37:29 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:52:25 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == 0)
		return ((char *) NULL);
	while (s[start + i] != '\0' && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	if (i < len)
		dest[i] = '\0';
	return (dest);
}
