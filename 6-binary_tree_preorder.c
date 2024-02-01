#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - performs pre-order traversal of a tree
 *
 * @tree: pointer to the tree root
 * @func: pointer to a function to call at each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
