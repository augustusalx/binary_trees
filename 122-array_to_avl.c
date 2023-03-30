#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t p, j;

	if (array == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
	{
		for (j = 0; j < p; j++)
		{
			if (array[j] == array[p])
				break;
		}
		if (j == p)
		{
			if (avl_insert(&tree, array[p]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
