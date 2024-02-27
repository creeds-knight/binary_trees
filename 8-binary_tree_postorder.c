#include "binary_trees.h"
/**
 * binary_tree_postorder - A function to use post-order traversal on the tree
 * @tree: Tree to be traversed
 * @func: pointer to function call on each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
