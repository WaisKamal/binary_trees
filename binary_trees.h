#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree);

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the potential parent node of the
 * new node
 * @value: value to store in the node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

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
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

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
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/**
 * binary_tree_delete - deletes all nodes in a binary tree
 * and deallocates the memory held by the nodes
 *
 * @tree: pointer to the root node of the tree to
 * delete
 */
void binary_tree_delete(binary_tree_t *tree);

/**
 * binary_tree_is_leaf - checks if the given node is a leaf
 * node
 *
 * @node: pointer to the node to check
 *
 * Return: 1 (leaf node), 0 (non-leaf node)
 */
int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_root - checks if the given node is a root
 * node
 *
 * @node: pointer to the node to check
 *
 * Return: 1 (root node), 0 (non-root node)
 */
int binary_tree_is_root(const binary_tree_t *node);

/**
 * binary_tree_preorder - performs pre-order traversal of a tree
 *
 * @tree: pointer to the tree root
 * @func: pointer to a function to call at each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_inorder - performs in-order traversal of a tree
 *
 * @tree: pointer to the tree root
 * @func: pointer to a function to call at each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_postorder - performs post-order traversal of a tree
 *
 * @tree: pointer to the tree root
 * @func: pointer to a function to call at each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
 * _binary_tree_height - finds the height of a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: tree height
 */
size_t _binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - wrapper around _binary_tree_height
 *
 * @tree: pointer to the tree root
 *
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * _binary_tree_depth - finds the depth of a node in
 * a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: node depth
 */
size_t _binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_depth - wrapper around _binary_tree_depth
 *
 * @tree: pointer to the tree root
 *
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_size - finds the number of nodes in a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_leaves - finds the number of leaf nodes
 * in a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: number of leaf nodes in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_nodes - finds the number of nodes with at
 * least one child in a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree);

/**
 * binary_tree_balance - finds the balance of a binary tree
 *
 * @tree: pointer to the tree root
 *
 * Return: tree balance
 */
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the tree root
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the tree root
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * binary_tree_sibling - finds the sibling of a given node
 * in a binary tree
 *
 * @node: pointer to the node whose sibling is to be found
 *
 * Return: pointer to the given node's sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - finds the uncle of a given node
 * in a binary tree
 *
 * @node: pointer to the node whose uncle is to be found
 *
 * Return: pointer to the given node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif
