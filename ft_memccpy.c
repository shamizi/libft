/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:37:52 by shamizi           #+#    #+#             */
/*   Updated: 2020/12/07 19:07:22 by shamizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*desti;
	unsigned char	*srci;

	i = 0;
	desti = (unsigned char *)dest;
	srci = (unsigned char *)src;
	while (i < n)
	{
		desti[i] = srci[i];
		if (srci[i] == (unsigned char)c)
			return ((void *)(desti + i + 1));
		i++;
	}
	return (0);
}
