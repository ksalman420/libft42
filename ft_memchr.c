/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:33:55 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:28:38 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function searches for the first occurrence of the character c (an unsigned char)
// in the first n bytes of the string pointed to, by the argument s.
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c % 256)
		{
			return (&((unsigned char *)s)[i]);
		}
		i++;
	}
	return (0);
}
