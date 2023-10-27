/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:33:55 by ksalman           #+#    #+#             */
/*   Updated: 2023/08/29 16:53:49 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int main ()
{
	char s[1000] = "kaosj";
	printf("%s",ft_memchr(s, 'k', 6));

}
*/
