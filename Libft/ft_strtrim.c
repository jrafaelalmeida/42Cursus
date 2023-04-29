/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:13:15 by jpacheco          #+#    #+#             */
/*   Updated: 2023/04/27 21:13:16 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char const c, char const	*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1) //passa á frente os carateres iguais ao set
	{
		if (check_char(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	len = ft_strlen(s1);
	while (len != 0)//passa á frente os carateres iguais ao set
	{
		if (check_char(s1[len - 1], set) == 1)
			len--;
		else
			break ;
	}
	new = malloc(sizeof(char) * len + 1); // aloca a memoria necessária mais um para o null terminator
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, len + 1);//copia o restante da s1 para a memoria alocada
	return (new);
}