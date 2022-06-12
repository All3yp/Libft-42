/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:37:22 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/09 23:59:15 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;
	size_t			idx;

	aux_src = (unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	idx = n;
	if (aux_src < aux_dest)
	{
		while (idx)
		{
			idx--;
			aux_dest[idx] = aux_src[idx];
		}
		return (dest);
	}
	ft_memcpy(aux_dest, aux_src, n);
	return (dest);
}
