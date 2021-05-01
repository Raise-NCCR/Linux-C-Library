/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:54:41 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:51:20 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int		i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	check_str(char str, char *charset)
{
	int		s;

	s = 0;
	if (charset == 0)
		return (1);
	if (str == '\0')
		return (0);
	while (charset[s] != '\0')
	{
		if (str == charset[s])
			return (1);
		s++;
	}
	return (0);
}

static char	**initialize_dest(char *str)
{
	char	**dest;

	if (str == 0)
		return (0);
	dest = (char **)malloc(ft_strlen(str) * ft_strlen(str) + 1);
	dest[0] = (char *)malloc(ft_strlen(str) + 1);
	return (dest);
}

static void	ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		t;
	int		l;
	char	**dest;

	dest = initialize_dest(str);
	i = -1;
	t = 0;
	l = 0;
	while (++i <= ft_strlen(str))
	{
		if ((check_str(str[i], charset) || str[i] == '\0') && l > 0)
		{
			ft_strncpy(dest[t], &str[i - l], l);
			l = 0;
			dest[++t] = (char *)malloc(ft_strlen(str) + 1);
		}
		if (!check_str(str[i], charset))
			l++;
	}
	dest[t] = 0;
	return (dest);
}
