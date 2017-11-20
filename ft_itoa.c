/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 08:23:34 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/20 15:27:02 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i > len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i--;
		len++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		isneg;
	int		len;
	int		i;
	char	*result;

	if (!ft_ispositive(n))
	{
		isneg = 1;
		n = -n;
	}
	len = 1;
	i = n;
	while (i >= 10)
	{
		i = i / 10;
		len++;
	}
	len--;
	if (!(result = ft_strnew(len + isneg)))
		return (0);
	i = 0;
	while (i <= len)
	{
		result[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (isneg)
		result[i] = '-';
	result = ft_strrev(result);
	return (result);
}
