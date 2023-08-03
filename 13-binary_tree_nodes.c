#include "binary_trees.h"

/**
 * binary_tree_nodes - function of the prototype
 * @tree: A pointer to the root node of the tree to count the number of the nodes.
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t current_nodes = 0;

	if (tree)
	{
		current_nodes += (tree->left || tree->right) ? 1 : 0;
		current_nodes += binary_tree_nodes(tree->left);
		current_nodes += binary_tree_nodes(tree->right);
	}
	return (current_nodes);
}

