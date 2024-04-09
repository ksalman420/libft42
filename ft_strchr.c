/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:22:46 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:29:19 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function searches for the first occurrence of the character c (an unsigned char)
// in the string pointed to by the argument str.
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == 0)
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
