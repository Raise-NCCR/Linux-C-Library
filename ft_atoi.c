/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:10:25 by teguchi           #+#    #+#             */
/*   Updated: 2021/05/02 13:51:05 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static long	ft_strtol(const char *str, int is_plus)
{
	long	sum;

	sum = 0;
	while ('0' <= *str && *str <= '9')
	{
		if (sum > (LONG_MAX - (*str - '0')) / 10)
		{
			if (is_plus == -1)
				return (LONG_MIN);
			return (LONG_MAX);
		}
		sum = 10 * sum + (*str++ - '0');
	}
	return (sum);
}

int	ft_atoi(const char *str)
{
	long	n;
	int	is_plus;

	n = 0;
	is_plus = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str < '0' || '9' < *str)
	{
		if (*str == '-')
			is_plus *= -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	n = ft_strtol(str, is_plus);
	if (is_plus == -1)
		return ((int)(-1 * n));
	return ((int)n);
}
