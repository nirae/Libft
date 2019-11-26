/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_rev_infix.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:42:53 by ndubouil          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/09/25 17:43:45 by ndubouil         ###   ########.fr       */
=======
/*   Updated: 2018/08/29 18:43:07 by ndubouil         ###   ########.fr       */
>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

void		ft_btree_apply_rev_infix(t_btree *tree, void (*func)(void *))
{
	if (tree == NULL)
<<<<<<< HEAD
		return ;
=======
		return;
>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
	if (tree->right != NULL)
		ft_btree_apply_rev_infix(tree->right, func);
	(*func)((void *)tree);
	if (tree->left != NULL)
		ft_btree_apply_rev_infix(tree->left, func);
}
