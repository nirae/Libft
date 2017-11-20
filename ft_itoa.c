/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 08:23:34 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/20 22:08:37 by ndubouil         ###   ########.fr       */
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

static int	ft_count(int n)
{
	int i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i - 1);
}

char	*ft_itoa(int n)
{
	int		isneg;
	int		len;
	int		i;
	char	*result;

	if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	if ((isneg = !ft_ispositive(n)))
		n = -n;
	len = ft_count(n);
	if (!(result = ft_strnew(len + isneg)))
		return (0);
	i = 0;
	while (i <= len)
	{
		result[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (isneg)
		result[i] = '-';
	return (ft_strrev(result));
}

