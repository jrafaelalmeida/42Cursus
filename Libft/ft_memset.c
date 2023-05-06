/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:08:14 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/06 16:05:43 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*pstr;

	i = 0;
	pstr = (unsigned char *) str;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (pstr);
}
