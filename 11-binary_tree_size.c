#include "binary_trees.h"

/**
 * binary_tree_size - function of the prototype
 * @tree: A pointer to the root node of the tree that measures the size of.
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t seze = 0;

	if (tree)
	{
		seze += 1;
		seze += binary_tree_size(tree->left);
		seze += binary_tree_size(tree->right);
	}
	return (seze);
}

