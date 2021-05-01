/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:06:17 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:57:08 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	nbrlen(int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static int	power(int digit)
{
	int		powered;

	powered = 1;
	while (digit > 1)
	{
		powered *= 10;
		digit--;
	}
	return (powered);
}

char	*ft_itoa(int n)
{
	int		len;
	int		powered;
	char	*dest;

	len = nbrlen(n);
	dest = (char *)malloc(sizeof(char) * len);
	if (dest == 0)
		return ((char *) NULL);
	while (len > 0)
	{
		powered = power(len);
		*dest = '0' + n / powered;
		n %= powered;
		len--;
		dest++;
	}
	return (dest);
}
