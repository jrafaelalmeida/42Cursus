/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:10:09 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/06 16:05:30 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i != 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (c == s[i])
		return ((char *)s + i);
	return (NULL);
}
