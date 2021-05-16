/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:54:41 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/03 12:49:57 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

static void	ft_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
}

static int	should_be_free(char **dest, int t)
{
	
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		t;
	int		l;
	char	**dest;

	dest = (char **)malloc(ft_strlen(s) * ft_strlen(s) + 1);
	dest[0] = (char *)malloc(ft_strlen(s) + 1);
	i = -1;
	t = 0;
	l = 0;
	while (++i <= ft_strlen(s))
	{
		if ((s[i] == c || s[i] == '\0') && l > 0)
		{
			ft_strncpy(dest[t], &s[i - l], l);
			l = 0;
			dest[++t] = (char *)malloc(ft_strlen(s) + 1);
			if (dest[t] == 0)
			{
				while (t-- > -1)
					free(dest[t]);
				free(dest);
				return (NULL);
			}
		}
		if (s[i] != c)
			l++;
	}
	free(dest[t]);
	dest[t] = 0;
	return (dest);
}
