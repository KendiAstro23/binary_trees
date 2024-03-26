#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds sibling in binary tree.
 * @node: A pointer to sibling node.
 *
 * Return: NULL for no pointer, Otherwise, a pointer to sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
