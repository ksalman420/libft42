/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:08:20 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:28:55 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function copies n characters from src to dest,
// but for overlapping memory blocks, ft_memmove() is a safer approach than ft_memcpy().
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	tmp = (void *)malloc(n * sizeof(tmp));
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
