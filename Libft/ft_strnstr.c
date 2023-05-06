/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:11:09 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/06 15:56:04 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (needle[n] == 0)
		return ((char *)haystack);
	while (haystack[h])
	{
		while (haystack[h + n] && haystack[h + n] == needle[n] && len > (h + n))
			n++;
		if (!(needle[n]))
			return ((char *)haystack + h);
		n = 0;
		h++;
	}
	return (0);
}
