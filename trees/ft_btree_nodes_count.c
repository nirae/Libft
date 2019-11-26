/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_nodes_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:44:57 by ndubouil          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/09/25 17:45:43 by ndubouil         ###   ########.fr       */
=======
/*   Updated: 2018/08/29 18:45:07 by ndubouil         ###   ########.fr       */
>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

int			ft_btree_nodes_count(t_btree *tree)
{
	if (tree == NULL)
		return (0);
<<<<<<< HEAD
	return (ft_btree_nodes_count(tree->left) + ft_btree_nodes_count(tree->right)
		+ 1);
=======
	return (ft_btree_nodes_count(tree->left) + ft_btree_nodes_count(tree->right) + 1);
>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
}
