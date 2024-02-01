#include <stdlib.h>
#include "binary_trees.h"

/**
 * _binary_tree_height - finds the height of a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: tree height
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = _binary_tree_height(tree->left);
	right_height = _binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_height - wrapper around _binary_tree_height
 *
 * @tree: pointer to the tree root
 *
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_binary_tree_height(tree) - 1);
}
