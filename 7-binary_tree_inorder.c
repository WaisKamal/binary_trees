#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - performs in-order traversal of a tree
 *
 * @tree: pointer to the tree root
 * @func: pointer to a function to call at each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
