#include "binary_trees.h"

/**
 * binary_tree_balance - function of the prototype
 * @tree: A pointer to the root node of the tree that measures the balance factor.
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - function of the prototype
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t q = 0, s = 0;

		q = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		s = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((q > s) ? q : s);
	}
	return (0);
}

