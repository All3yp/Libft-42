/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:29:58 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/19 18:09:50 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*aux;

	s_len = ft_strlen(s) + 1;
	aux = (char *)malloc(s_len * sizeof(char));
	if (!aux || s_len == 0)
		return (NULL);
	ft_strlcpy(aux, s, s_len);
	return (aux);
}
