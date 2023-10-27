/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:41:42 by ksalman           #+#    #+#             */
/*   Updated: 2023/10/23 17:07:14 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*tmp;

	if (del == 0 || lst == 0 || *lst == 0)
		return ;
	curr = *lst;
	while (curr != 0)
	{
		tmp = curr->next;
		(del)(curr->content);
		free(curr);
		curr = tmp;
	}
	*lst = NULL;
}
