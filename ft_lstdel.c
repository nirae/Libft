/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:42:30 by ndubouil          #+#    #+#             */
/*   Updated: 2017/12/12 08:16:26 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (alst != NULL && del != NULL)
	{
		while (*alst != NULL)
		{
			temp = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = temp;
		}
	}
}
