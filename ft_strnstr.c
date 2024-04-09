/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:38:37 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:46:34 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function locates the first occurrence of the null-terminated
// string little in the string big, where not more than len characters
//  are searched. Characters that appear after a `\0' character are not searched.
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (i < len && big[i] != 0)
	{
		j = 0;
		while ((big[i + j] == little[j] && big[i + j] != 0) && i + j < len)
		{
			if (little[j + 1] == 0)
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
