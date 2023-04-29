/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:14:40 by jpacheco          #+#    #+#             */
/*   Updated: 2023/04/29 14:21:16 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	if(!s || fd < 0)
		return;
	while(s[i++])
		ft_putchar_fd(fd,&s[i],1);
	ft_putchar_fd(fd,'\n',1);
}
