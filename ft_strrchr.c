/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:42:09 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:44:53 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function searches for the last occurrence of the character c (an unsigned char)
// in the string pointed to, by the argument s.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
		{
			j = i;
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(&s[i]));
	else if (s[j] != (char)c)
		return (0);
	else
		return ((char *)(&s[j]));
}
