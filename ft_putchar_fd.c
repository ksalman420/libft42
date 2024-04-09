/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:19:44 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 08:05:38 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function writes a character on the given file descriptor.
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
