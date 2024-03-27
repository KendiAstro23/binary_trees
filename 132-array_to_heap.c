#include "binary_trees.h"

/**
 * array_to_heap - Makes a Max Binary Heap tree from an array
 * @array: first element ptr of the array to be converted
 * @size: elements in an array
 *
 * Return: root node ptr of the created Binary Heap
 * for success, NULL for failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
