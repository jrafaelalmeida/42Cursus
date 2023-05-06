/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:13:33 by jpacheco          #+#    #+#             */
/*   Updated: 2023/05/06 15:52:48 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_res(int size, int offset, int n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n /= 10;
		size--;
	}
}

static long int	get_size(long int n)
{
	long int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			offset;
	long int	len;

	offset = 0;
	len = get_size(n);
	res = malloc(sizeof(char) * len + 1);
	if (!(res))
		return (NULL);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
		offset++;
	}
	ft_fill_res(len, offset, n, res);
	res[len] = '\0';
	return (res);
}
