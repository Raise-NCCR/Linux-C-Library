/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:05:33 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/02 14:08:55 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (*s1_cpy != '\0' && n--)
	{
		if (*s1_cpy == *s2_cpy)
		{
			s1_cpy++;
			s2_cpy++;
			continue ;
		}
		return ((int)(*s1_cpy - *s2_cpy));
	}
	if (n > 0 && *s2_cpy != '\0')
		return ((int)(*s1_cpy - *s2_cpy));
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		little_len;
	const char	*little_cpy;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return ((char *) NULL);
	little_len = 0;
	little_cpy = little;
	while (*little_cpy++ != '\0')
		little_len++;
	while (*big != '\0' && len)
	{
		if (len < little_len)
			return (NULL);
		if (*big == *little)
		{
			if (ft_strncmp(big, little, little_len) == 0)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return ((char *) NULL);
}
