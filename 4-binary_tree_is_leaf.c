#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if the given node is a leaf
 * node
 *
 * @node: pointer to the node to check
 *
 * Return: 1 (leaf node), 0 (non-leaf node)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL)
		return (0);
	if (node->right != NULL)
		return (0);
	return (1);
}
