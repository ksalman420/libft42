/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:56:18 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:39:57 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function computes the length of the string str up to,
// but not including the terminating null character.
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
