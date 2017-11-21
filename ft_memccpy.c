/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:28:41 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/21 11:56:43 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*source;

	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
