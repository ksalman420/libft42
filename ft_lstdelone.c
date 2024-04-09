/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:25:39 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:58:37 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function deletes a link.
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != 0)
	{
		(del)(lst->content);
		free(lst);
	}
}
