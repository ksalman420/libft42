/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:59:46 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:28:08 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function erases the data in the n bytes of the memory starting at the location pointed to by s,
// by writing zeros (bytes containing '\0') to that area.
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
