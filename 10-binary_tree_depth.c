#include "binary_trees.h"

/**
 * binary_tree_depth - function of the prototype
 * @tree: A pointer to the node that measures the depth.
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

