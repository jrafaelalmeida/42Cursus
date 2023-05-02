/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:18:12 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/02 21:23:45 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst) // lista nao nula
		return (NULL);
	while (lst->next) // enquanto houver proximo elemento da lista
	{
		lst = lst->next;
	}
	return (lst);
}
