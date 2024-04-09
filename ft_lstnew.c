/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:27:59 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 08:01:17 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function returns a new link with the content 
// and content size provided and next set to NULL.
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == 0)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
