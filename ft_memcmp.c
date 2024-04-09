/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:09:21 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:22:20 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function compares the first n bytes of memory area s1 and memory area s2.
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			j = 0;
		else
		{
			j = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
			return (j);
		}
		i++;
	}
	return (j);
}
