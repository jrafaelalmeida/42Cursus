/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:10:09 by jpacheco          #+#    #+#             */
/*   Updated: 2023/04/27 21:10:10 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c) 
{
	unsigned int	i;
	
	i=0;
	if (!s)
		return (NULL);
    while (s[i])
	{
		if (s[i] == c)
		return ((char *)s + i);
		i++;
    }
    if (s[i] == c)
        return (char *)s + i;
    return (NULL);
}
