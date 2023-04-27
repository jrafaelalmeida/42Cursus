/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:08:33 by jpacheco          #+#    #+#             */
/*   Updated: 2023/04/27 21:51:56 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*str, size_t	n)
{	
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *) str;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}
