#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the tree root
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t node_count, tree_height;

	if (tree == NULL)
		return (0);

	node_count = binary_tree_size(tree) + 1;
	tree_height = binary_tree_height(tree);

	while (node_count > 1 && tree_height > 0)
	{
		if (node_count % 2 == 0)
		{
			node_count /= 2;
			tree_height--;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
