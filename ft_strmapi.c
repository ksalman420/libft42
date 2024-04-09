/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:00:12 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 08:13:55 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function returns a new string which is the result of applying the function to the
// given string.
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = (char *) malloc(ft_strlen(s) + 1);
	if (res == 0)
		return (NULL);
	while (s[i] != 0)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
