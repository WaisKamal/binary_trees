#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the number of nodes with at
 * least one child in a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
