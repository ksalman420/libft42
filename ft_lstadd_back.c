/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:21:01 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:58:51 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function adds a link at the end of the chain.
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	curr = ft_lstlast(*lst);
	if (curr == 0)
		*lst = new;
	else
		curr->next = new;
}
