/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:16:45 by shamizi           #+#    #+#             */
/*   Updated: 2020/12/08 13:06:34 by shamizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		sizetab(long nb)
{
	int		len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void			write_nb(long nb, int len, char *res)
{
	if (nb == 0)
	{
		res[0] = '0';
	}
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		res[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = sizetab(nb);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = 0;
	len--;
	write_nb(nb, len, str);
	return (str);
}
