#include "binary_trees.h"

/**
 * binary_tree_insert_right - function of the prototype
 * @parent: A pointer to the node that the right-child is insertedin.
 * @value: The value to store in the fresh node.
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the fresh node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh;

	if (parent == NULL)
		return (NULL);

	fresh = binary_tree_node(parent, value);
	if (fresh == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		fresh->right = parent->right;
		parent->right->parent = fresh;
	}
	parent->right = fresh;

	return (fresh);
}

