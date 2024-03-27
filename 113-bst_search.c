#include "binary_trees.h"

/**
 * bst_search - Finds a value in a binary search tree.
 * @tree: root node ptr of the BST to search.
 * @value: parameter.
 *
 * Return: NULL if value is not found,
 * else, node ptr with value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
