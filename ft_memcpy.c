/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:02:37 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/09 23:30:27 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*aux_dest;
	char	*aux_src;

	i = 0;
	aux_src = (char *)src;
	aux_dest = (char *)dest;
	while (i < n && dest != src)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (aux_dest);
}
