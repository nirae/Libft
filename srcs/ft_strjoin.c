/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 09:00:17 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/15 09:49:48 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	result = (char *)malloc(sizeof(char) + (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (result == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		result[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		result[j] = s2[i];
		j++;
		i++;
	}
	result[j] = '\0';
	return (result);
}
