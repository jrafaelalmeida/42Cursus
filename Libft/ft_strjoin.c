/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:12:57 by jpacheco          #+#    #+#             */
/*   Updated: 2023/04/27 21:12:58 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*pnstr;

	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	pnstr = malloc(len * (sizeof(char)));
	if (!pnstr)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
		pnstr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		pnstr[j++] = s2[i++];
	pnstr[j] = '\0';
	return (pnstr);
}
