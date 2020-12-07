/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:09:26 by shamizi           #+#    #+#             */
/*   Updated: 2020/11/30 12:50:17 by shamizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*desti;
	unsigned char	*srci;

	desti = (unsigned char *)dest;
	srci = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < len)
	{
		desti[i] = srci[i];
		i++;
	}
	return (dest);
}
