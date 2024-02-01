#include <stdlib.h>
#include <stdbool.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the tree root
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) ^ (tree->right == NULL))
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	return ((int)(
		((bool)binary_tree_is_full(tree->left))
		&& ((bool)binary_tree_is_full(tree->right))
	));
}
