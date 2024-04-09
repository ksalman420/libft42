/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:10:28 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:09:24 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function is used to check that the character is alphanumeric or not.
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c) || ft_isalpha(c)) != 0)
		return (8);
	else
		return (0);
}
