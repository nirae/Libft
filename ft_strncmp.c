/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:52:51 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/16 15:24:27 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && n > i)
	{
		if (s2[i] == '\0' || s2[i] < s1[i])
			return (1);
		if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	return (0);
}
