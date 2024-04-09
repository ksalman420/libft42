/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:09:06 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:29:05 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function copies the character c (an unsigned char)
// to the first n characters of the string pointed to, by the argument s.
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
