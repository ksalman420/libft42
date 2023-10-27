/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:38:37 by ksalman           #+#    #+#             */
/*   Updated: 2023/10/26 19:12:02 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (i < len && big[i] != 0)
	{
		j = 0;
		while ((big[i + j] == little[j] && big[i + j] != 0) && i + j < len)
		{
			if (little[j + 1] == 0)
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
char *
strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

int main (void)
{
	char str[] = "that is too good to be true good";
	char to_find[] = "good";
	char *res = ft_strnstr(str,to_find,16);
	char *kam = strnstr(str,to_find,16);
	printf("%s",kam);
	printf("%s",res);
}
*/
