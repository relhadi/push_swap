/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:37:02 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 02:15:41 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_all(char **tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static size_t	count_word(char	*s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	word_len(char *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static size_t	word_add(char *s, char c, char **tab)
{
	size_t		i;
	size_t		i_tab;

	i_tab = 0;
	i = 0;
	while (i_tab < count_word(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			tab[i_tab] = ft_substr(s, i, word_len(s + i, c));
			if (!tab[i_tab])
			{
				free_all(tab, i_tab);
				return (0);
			}
			i += word_len(s + i, c);
			i_tab++;
		}
	}
	tab[i_tab] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_word((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	if (word_add((char *)s, c, tab) == 0)
		return (NULL);
	return (tab);
}
