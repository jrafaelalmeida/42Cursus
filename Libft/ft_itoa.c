/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:13:33 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/02 20:09:07 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*reverse(char str[], int length)
{
	int	start;
	int	end;
	char	temp;
	
	start = 0;
	end = length - 1;
	while(start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}
char	*ft_itoa(int n)
{
	 
}
