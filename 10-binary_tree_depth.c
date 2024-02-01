#include <stdlib.h>
#include "binary_trees.h"

/**
 * _binary_tree_depth - finds the depth of a node in
 * a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: node depth
 */
size_t _binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_binary_tree_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - wrapper around _binary_tree_depth
 *
 * @tree: pointer to the tree root
 *
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_binary_tree_depth(tree) - 1);
}
