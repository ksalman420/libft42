/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:09:21 by ksalman           #+#    #+#             */
/*   Updated: 2023/10/24 16:43:08 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int main ()
{
	char s3[] = {0, 0, 42, 0};
	char s2[] = {0, 0, 127, 0};
	char s1[5] = "hey!";
	printf("%d",ft_memcmp(s2,s3,4));
	
}
*/
