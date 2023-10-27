/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:19:32 by ksalman           #+#    #+#             */
/*   Updated: 2023/10/27 13:12:03 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (!size)
		return (j);
	while (i < size - 1 && i < j)
	{
		dst[i] = src[i];
		i++;
	}
	if (size)
	{
		dst[i] = '\0';
	}
	return (j);
}
