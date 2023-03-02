# include "binary_trees.h"
static size_t binary_tree_heights(const binary_tree_t *);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: if tree is NULL return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_heights(tree->left) - binary_tree_heights(tree->right));
}


/**
 * binary_tree_heights - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 *
 * Return: if tree is NULL returns 0 else returns height of tree
 */


size_t binary_tree_heights(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	return ((h_left > h_right) ? h_left : h_right);
}
