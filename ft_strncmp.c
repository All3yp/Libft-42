/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:23:02 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/13 12:08:42 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	else
	{
		while (--n && *s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
