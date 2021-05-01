/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teguchi <raise1229@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:10:25 by teguchi           #+#    #+#             */
/*   Updated: 2021/04/20 12:56:10 by teguchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n;
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
	while ('0' <= *str && *str <= '9')
		n = 10 * n + (*str++ - '0');
	if (is_plus)
		return (n);
	return (-n);
}
