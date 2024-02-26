#include "binary_trees.h"
/**
 * binary_tree_node - A function to create a binary tree node
 * @parent: The parent node
 * @value: THe key to the node being created
 * Return: A pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_to;

	node_to =  malloc(sizeof(binary_tree_t));
	if (node_to == NULL)
		return (NULL);

	node_to->n = value;
	node_to->parent = parent;
	node_to->left = NULL;
	node_to->right = NULL;

	return (node_to);
}
