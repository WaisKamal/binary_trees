#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a new node and inserts it
 * as the right child of @parent
 *
 * @parent: pointer to the potential parent node of the
 * new node
 * @value: value to store in the node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
		parent->right = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
