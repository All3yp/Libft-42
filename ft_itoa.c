/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:42:28 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/29 18:53:49 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num);
static int	ft_isnegative(int n);
static char	*ft_convert_itoa(char *str, size_t size, unsigned int num,
				unsigned int is_negative);

char	*ft_itoa(int n)
{
	size_t			digits;
	unsigned int	is_negative;
	unsigned int	nb;
	char			*str;

	digits = ft_numlen(n);
	is_negative = ft_isnegative(n);
	if (is_negative)
		nb = -n;
	else
		nb = n;
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	return (ft_convert_itoa(str, digits, nb, is_negative));
}

static int	ft_isnegative(int n)
{
	return (n < 0);
}

static int	ft_numlen(int num)
{
	size_t	len;

	len = 1;
	if (num < 0)
		len++;
	num /= 10;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*ft_convert_itoa(char *str, size_t size, unsigned int num,
		unsigned int is_negative)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (num % 10) + 48;
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
