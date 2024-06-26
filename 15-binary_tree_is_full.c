#include "binary_trees.h"

/**
 * is_full_recursive - Checks for full recursive binary tree.
 * @tree: A pointer to tree's root node.
 *
 * Return:0  if not full, Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if binary tree is full.
 * @tree: A pointer to tree's root node.
 *
 * Return: 0 if NULL, Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
