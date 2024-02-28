#include "binary_trees.h"
/**
 * binary_tree_height - A function that returnns the height of a binary tree
 * @tree: Tree to be used
 * Return: height of tree or NULL if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft_height, rgt_height, padding;

	if (tree == NULL)
		return (0);
	padding = 0;
	lft_height = binary_tree_height(tree->left);
	rgt_height = binary_tree_height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		padding = 1;

	if (lft_height > rgt_height)
		return (padding + lft_height);
	return (padding + rgt_height);
}
