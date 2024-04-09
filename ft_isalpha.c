/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:03:38 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:10:12 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function checks whether a character is an alphabet (a to z and A-Z) or not.
#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z'))
	{
		return (1024);
	}
	else
		return (0);
}
