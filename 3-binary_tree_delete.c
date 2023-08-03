#include "binary_trees.h"

/**
 * binary_tree_delete - function of the prototype
 * @tree: A pointer to the root node of the tree that is to be deleted.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
