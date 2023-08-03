#include "binary_trees.h"

/**
 * binary_tree_height - function of the prototype
 * @tree: A pointer to the root node of the tree that measures the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t q = 0, s = 0;

		q = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		s = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((q > s) ? q : s);
	}
	return (0);
}

