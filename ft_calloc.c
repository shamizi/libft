/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:19:47 by shamizi           #+#    #+#             */
/*   Updated: 2020/11/30 10:34:12 by shamizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*res;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(sizeof((nmemb * size)));
	while (i <= nmemb)
	{
		((char *)res)[i] = 0;
		i++;
	}
	return (res);
}
