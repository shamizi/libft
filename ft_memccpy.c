/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:37:52 by shamizi           #+#    #+#             */
/*   Updated: 2020/11/30 12:49:42 by shamizi          ###   ########.fr       */
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
	if (!src && !dest)
		return (dest);
	while (i < n)
	{
		desti[i] = srci[i];
		if (srci[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
