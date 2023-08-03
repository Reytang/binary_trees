#include "binary_trees.h"

/**
 * binary_tree_node - function of the prototype
 * @parent: A pointer to the parent of the node that is to be created
 * @value: The value put into the new node.
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh;

	fresh = malloc(sizeof(binary_tree_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = value;
	fresh->parent = parent;
	fresh->left = NULL;
	fresh->right = NULL;

	return (fresh);
}

