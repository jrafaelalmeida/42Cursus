/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:44:20 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/02 20:55:18 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new ->content = content;
	new ->next = NULL;
	return (new);
}
