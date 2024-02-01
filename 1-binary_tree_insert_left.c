#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a new node and inserts it
 * as the left child of @parent
 *
 * @parent: pointer to the potential parent node of the
 * new node
 * @value: value to store in the node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;

	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
		parent->left = newNode;
	}

	parent->left = newNode;

	return (newNode);
}
