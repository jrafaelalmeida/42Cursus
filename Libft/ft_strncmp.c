/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:10:22 by jpacheco          #+#    #+#             */
/*   Updated: 2023/04/27 22:55:09 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while ( i <= n)
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}