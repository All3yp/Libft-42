/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:38:30 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/29 15:58:02 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	buff_size;
	void	*buff;

	buff_size = nmemb * size;
	if (buff_size == 0 || !(buff_size / nmemb))
	{
		return (NULL);
	}
	buff = malloc(buff_size);
	if (!buff)
	{
		return (NULL);
	}
	ft_memset(buff, 0, buff_size);
	return (buff);
}
