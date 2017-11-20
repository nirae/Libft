/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 22:19:28 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/20 22:35:04 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_ok(char c, char a)
{
	if (c != a && c != '\0')
		return (1);
	return (0);
}

static int	ft_words(char *s, char a)
{
	if (*s == 0)
		return (0);
	else if (ft_is_ok(*s, a) && !ft_is_ok(*(s + 1), a))
		return (1 + ft_words(s + 1, a));
	return (0 + ft_words(s + 1, a));
}

static int	ft_skip(char *s, int i, char a)
{
	while (!ft_is_ok(s[i], a))
		i++;
	return (i);
}

static int	ft_letters(char *s, int i, char a)
{
	if (ft_is_ok(s[i], a))
		return (1 + ft_letters(s, i + 1, a));
	return (0);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		nb_words;

	nb_words = ft_words((char *)s, c);
	if (!(tab = (char**)malloc((nb_words + 1) * sizeof(*tab))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < nb_words)
	{
		k = 0;
		if (!(tab[j] = (char*)malloc((ft_letters((char *)s, i, c) + 1) * sizeof(tab))))
			return (NULL);
		i = ft_skip((char *)s, i, c);
		while (ft_is_ok(s[i], c))
			tab[j][k++] = s[i++];
		tab[j++][k] = 0;
	}
	tab[j] = 0;
	return (tab);
}
