/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamizi <shamizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:44:22 by shamizi           #+#    #+#             */
/*   Updated: 2020/11/30 12:51:23 by shamizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**freestrings(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

static int	nb_mot(char const *s, char c)
{
	int		i;
	int		j;
	int		compt;

	i = 0;
	j = 0;
	compt = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			j = 0;
		else if (j == 0)
		{
			j = 1;
			compt++;
		}
		i++;
	}
	return (compt);
}

static int	len_word(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**affect(char const *s, char **tab, char c, int l)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i] && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		tab[j] = malloc(sizeof(char) * (len_word(s, c, i) + 1));
		if (tab[j] == NULL)
			return (freestrings(tab));
		while (s[i] && s[i] != c)
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = 0;
	return (tab);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	i = nb_mot(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (i + 1))))
		return (0);
	return (affect(s, tab, c, i));
}
