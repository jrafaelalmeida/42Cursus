/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:14:29 by jpacheco          #+#    #+#             */
/*   Updated: 2023/04/27 22:22:06 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *s, int fd)
{
	int	len;
	
	len = 0;
	if (!s)
		return ;
	while (s[len])
	{
		len++;
	}
	write(fd, s, len);
}
//check