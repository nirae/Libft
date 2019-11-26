/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_level_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:45:22 by ndubouil          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/09/25 17:45:08 by ndubouil         ###   ########.fr       */
=======
/*   Updated: 2018/08/29 18:46:17 by ndubouil         ###   ########.fr       */
>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

int			ft_btree_level_count(t_btree *tree)
{
	int		result;

	if (tree == NULL)
		return (0);
	result = 0;
	if (tree->left != NULL)
	{
		if (result > 0)
			result--;
		result = ft_btree_level_count(tree->left);
	}
	if (tree->right != NULL)
	{
		if (result > 0)
			result--;
		result = ft_btree_level_count(tree->right);
	}
	return (result + 1);
<<<<<<< HEAD
=======

>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
}
