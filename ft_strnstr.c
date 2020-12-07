/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:15:48 by shamizi           #+#    #+#             */
/*   Updated: 2020/11/26 10:18:13 by shamizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*to_find)
		return ((char *)src);
	while (src[i] && i < len)
	{
		j = 0;
		while (to_find[j] == src[i + j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
