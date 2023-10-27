/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:10:28 by ksalman           #+#    #+#             */
/*   Updated: 2023/08/29 17:34:11 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c) || ft_isalpha(c)) != 0)
		return (8);
	else
		return (0);
}
/*
int main ()
{
	printf("%d",ft_isalnum('f'));
	printf("%d",ft_isalnum('\0'));
}
*/
