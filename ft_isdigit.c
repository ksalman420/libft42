/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:12:34 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:14:55 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function checks if the passed character is a digit or not.
#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}
