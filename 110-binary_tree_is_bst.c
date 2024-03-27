#include "binary_trees.h"

/**
 * is_bst_helper - Checks if a binary tree is a valid bst.
 * @tree: A pointer to the tree's root node.
 * @lo: smallest node visited.
 * @hi:largest node visited.
 *
 * Return: 1 If the tree is a valid BST, otherwise, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid bst.
 * @tree: A pointer to the tree's root node.
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
