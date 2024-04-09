/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:22:24 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:31:00 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function duplicates a string.
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;
	int		k;

	k = ft_strlen(src);
	dup = (char *)malloc(sizeof(*src) * (k + 1));
	if (dup == 0)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
