1#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Checks if binary tree is a valid BST.
 * @tree: root node ptr of the tree to check.
 * @lo: smallest node value.
 * @hi: largest node value.
 *
 * Return: 1 for success, otherwise 0.
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
 * binary_tree_is_bst - Checks if binary tree is a valid BST.
 * @tree: root node ptr of the tree to check.
 *
 * Return: 1 for success, else 0.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
