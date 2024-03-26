#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int is_complete = 1, is_last_level = 0;
	binary_tree_t *queue[1024], *node;
	size_t front = 0, rear = 0;

	if (tree == NULL)
		return (0);
	queue[rear++] = (binary_tree_t *)tree;

	while (front != rear)
	{
		node = queue[front++];

		if (node->left != NULL)
		{
			if (is_last_level)
			{
				is_complete = 0;
				break;
			}
			queue[rear++] = node->left;
		}
		else
		{
			is_last_level = 1;
		}
		if (node->right != NULL)
		{
			if (is_last_level)
			{
				is_complete = 0;
				break;
			}
			queue[rear++] = node->right;
		}
		else
		{
			is_last_level = 1;
		}
	}
	return (is_complete);
}
