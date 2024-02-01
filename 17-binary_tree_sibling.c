#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node
 * in a binary tree
 *
 * @node: pointer to the node whose sibling is to be found
 *
 * Return: pointer to the given node's sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left_sibling, *right_sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	left_sibling = node->parent->left;
	right_sibling = node->parent->right;

	if (left_sibling != NULL && left_sibling != node)
		return (left_sibling);
	if (right_sibling != NULL && right_sibling != node)
		return (right_sibling);
	return (NULL);
}
