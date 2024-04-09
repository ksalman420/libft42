/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:35:16 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:16:16 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function checks whether a character is a printable character or not.
#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c != 127)
	{
		return (16384);
	}
	else
	{
		return (0);
	}
}
