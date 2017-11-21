/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 22:19:28 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/21 23:58:58 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_ok(char c, char a)
{
	if (c != a && c != '\0')
		return (1);
	return (0);
}

static int	ft_count_words(char *str, char sep)
{
	if (*str == '\0')
		return (0);
	else if (ft_is_ok(*str, sep) && !ft_is_ok(*(str + 1), sep))
		return (1 + ft_count_words(str + 1, sep));
	return (0 + ft_count_words(str + 1, sep));
}
/*
static int	ft_count_words(char *s, char separator)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == separator)
			i++;
		if (str[i] != separator && str[i] != '\0')
		{
			words++;
			while (str[i] != separator && str[i] != '\0')
				i++;
		}
	}
	return (words);
}
*/

/*
static int	ft_letters(char *s, int i, char a)
{
	if (s[i] != '\0' && s[i] != a)
		return (1 + ft_letters(s, i + 1, a));
	return (0);
}
*/
static int	ft_letters(char *str, char sep)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] == sep)
		i++;
	while (str[i] != sep && str[i] != '\0')
	{
		i++;
		result++;
	}
	return (result);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		nb_words;

	nb_words = ft_count_words((char *)s, c);
	if (!(tab = ft_memalloc((nb_words + 1) * sizeof(*tab))))
		return (0);
	i = 0;
	j = 0;
	while (i < nb_words)
	{
		k = 0;
		if (!(tab[i] = ft_strnew(ft_letters((char *)s, c) + 1)))
			return (0);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
