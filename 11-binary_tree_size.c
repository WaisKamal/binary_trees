#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - finds the number of nodes in a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
