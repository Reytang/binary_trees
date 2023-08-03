#include "binary_trees.h"

/**
 * binary_tree_inorder - function of the prototype
 * @tree: A pointer to the root node of the tree to be traversed.
 * @func: A pointer to a function to call for each of the node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

