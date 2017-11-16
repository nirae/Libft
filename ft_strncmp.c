/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:46:48 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/16 11:49:05 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	int		result;

	i = 0;
	while (s1[i] != '\0' && s2[i] !='\0' && s1[i] == s2[i] && i < len)
		i++;
	return (result = s1[i] - s2[i]);
}
