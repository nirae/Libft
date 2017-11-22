/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:33:54 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/22 15:27:09 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*str1;
	char			*str2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < (n - 1))
		i++;
	if (n != 0)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
