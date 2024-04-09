/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:19:33 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:40:52 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function compares at most the first n bytes of s1 and s2.
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] == s2[i])
			j = 0;
		else
		{
			j = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (j);
}
