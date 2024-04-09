/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:49:30 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 08:16:53 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function returns a new string which contains len characters 
// from the original string starting from index start.
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t				j;
	char				*res;
	size_t				nlen;

	j = 0;
	nlen = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len < nlen)
		nlen = len;
	res = (char *)malloc((nlen + 1) * sizeof(char));
	if (res == 0)
		return (NULL);
	while (j < len && s[start] != 0)
	{
		res[j] = s[start];
		j++;
		start++;
	}
	res[j] = '\0';
	return (res);
}
/*
int main ()
{
	const char s[100] = "0123456789";
	char *raw;
	raw = ft_substr(s, 9, 10);
	printf("%s" ,raw);
}
*/
