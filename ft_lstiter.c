/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:51:02 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:59:12 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function applies a function to all links of the chain.
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != 0)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}
