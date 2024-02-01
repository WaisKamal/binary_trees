#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes all nodes in a binary tree
 * and deallocates the memory held by the nodes
 *
 * @tree: pointer to the root node of the tree to
 * delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
