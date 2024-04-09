/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:07:45 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:38:52 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function concatenates strings.
//it appends the NUL-terminated string src to the end of dst.
//it will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srcsize;
	size_t	destsize;

	if (!dest || !src)
		return (0);
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (n < destsize)
		return (srcsize + n);
	else
	{
		dest = dest + destsize;
		ft_strlcpy(dest, src, n - destsize);
		return (srcsize + destsize);
	}
}
