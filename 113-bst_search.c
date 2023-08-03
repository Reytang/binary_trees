#include "binary_trees.h"

/**
 * bst_search - Searches for a value.
 * @tree: A pointer to the root.
 * @value: The value to search.
 *
 * Return: If the tree is NULL.
 *         Otherwise, a pointer.
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

