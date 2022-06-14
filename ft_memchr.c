/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:55:46 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/13 12:15:10 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;

	b = (unsigned char *)s;
	while (n--)
	{
		if (*b == (unsigned char)c)
			return ((void *)b);
		b++;
	}
	return (NULL);
}
