/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:52:21 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/02 21:35:59 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	new->next = *lst;
	*lst = new;
	return(new);
}
