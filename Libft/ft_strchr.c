/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:09:58 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/06 18:30:36 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			k;

	k = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == k)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == k)
		return ((char *)(s + i));
	return (NULL);
}
