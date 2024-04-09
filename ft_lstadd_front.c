/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:50:00 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 07:58:43 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function adds a new link at the beginning of the chain.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
