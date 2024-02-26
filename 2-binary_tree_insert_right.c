#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function to insert a node as a right child
 * @parent: Parent to new node
 * @valu: value to be added
 * Return: pointer to created node or NULL on failure of NULL if parent is NUL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_to;

	node_to = malloc(sizeof(binary_tree_t));
	if (node_to == NULL)
		return (NULL);

	node_to->n = value;
	node_to->parent = parent;
	node_to->left = NULL;
	node_to->right = NULL;
	if (parent == NULL)
	{
		free(node_to);
		return (NULL);
	}
	if (parent->right == NULL)
		parent->right = node_to;
	else
	{
		node_to->right = parent->right;
		parent->right = node_to;
		node_to->right->parent = node_to;
	}
	return (node_to);
}
