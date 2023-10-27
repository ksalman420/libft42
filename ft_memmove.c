/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:08:20 by ksalman           #+#    #+#             */
/*   Updated: 2023/08/29 16:54:15 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int main ()
{	
	char *src = malloc(10);
	src[0] = 'k';
	src[1] = '\0';
	char *dest = malloc(1000);
	ft_memmove(dest, src,2);
	printf("%s", dest);	
}
*/
