/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:14:02 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:07:22 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function allocates the requested memory and returns a pointer to it. 
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new;
	size_t	asize;

	asize = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		new = malloc(0);
		return (new);
	}
	if (asize / nmemb != size)
		return (NULL);
	new = malloc(asize);
	if (new == 0)
		return (NULL);
	ft_bzero(new, asize);
	return (new);
}
