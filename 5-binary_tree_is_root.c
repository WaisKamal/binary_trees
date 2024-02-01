#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the given node is a root
 * node
 *
 * @node: pointer to the node to check
 *
 * Return: 1 (root node), 0 (non-root node)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}
