#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - performs post-order traversal of a tree
 *
 * @tree: pointer to the tree root
 * @func: pointer to a function to call at each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
