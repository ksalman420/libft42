/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:33:01 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:11:59 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
