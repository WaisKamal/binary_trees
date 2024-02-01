#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance of a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: tree balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
