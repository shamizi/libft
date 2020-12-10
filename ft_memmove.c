/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:47:34 by shamizi           #+#    #+#             */
/*   Updated: 2020/12/08 13:10:39 by shamizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	const unsigned char	*srci;
	unsigned char		*desti;

	i = 0;
	desti = dest;
	srci = src;
	if (src == dest)
		return (dest);
	while (src > dest && i < n)
	{
		desti[i] = srci[i];
		i++;
	}
	while (src < dest && i < n)
	{
		desti[n - i - 1] = srci[n - i - 1];
		i++;
	}
	return (dest);
}
