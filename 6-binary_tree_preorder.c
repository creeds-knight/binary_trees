#include "binary_trees.h"
/**
 * binary_tree_preorder - A function to use pre-order traversal on the tree
 * @tree: Tree to be traversed
 * @func: pointer to function call on each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
