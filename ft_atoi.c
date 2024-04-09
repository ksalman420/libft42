/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:24:43 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:03:33 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function converts the string argument nptr to an integer (type int).
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 1;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			j = -j;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * j);
}
