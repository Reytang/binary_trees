#include "binary_trees.h"

/**
 * binary_tree_insert_left - function of the prototype
 * @parent: A pointer to the node where the left-child is inserted in.
 * @value: The value to store in the fresh node.
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh;

	if (parent == NULL)
		return (NULL);

	fresh = binary_tree_node(parent, value);
	if (fresh == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		fresh->left = parent->left;
		parent->left->parent = fresh;
	}
	parent->left = fresh;

	return (fresh);
}

