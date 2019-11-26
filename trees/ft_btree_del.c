/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:39:14 by ndubouil          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/01/14 22:46:20 by ndubouil         ###   ########.fr       */
=======
/*   Updated: 2018/08/29 18:40:17 by ndubouil         ###   ########.fr       */
>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

<<<<<<< HEAD
void		ft_btree_del(t_btree **tree, void (*del)(void *))
{
	if (!tree || !(*tree))
		return ;
	ft_btree_del(&((*tree)->left), del);
	ft_btree_del(&((*tree)->right), del);
	del((*tree)->data);
	ft_memdel((void **)tree);
=======
void		ft_btree_del(t_btree *tree, void (*del)(void *))
{
	if (tree == NULL)
		return;
	ft_btree_del(tree->left, del);
	ft_btree_del(tree->right, del);
	del(tree->data);
	ft_memdel((void **)&tree);
>>>>>>> 861d0e2b80b9cae462a96811a3243e7205920957
}
