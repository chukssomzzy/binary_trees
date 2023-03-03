# include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: if tree is NULL, your function returns 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_is_full(tree) && (binary_tree_balance(tree) == 0));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to checks
 *
 * Return: tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else if (!tree->left || !tree->right)
		return (0);
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}

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
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 *
 * Return: if tree is NULL returns 0 else returns height of tree
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	return ((h_left > h_right) ? h_left : h_right);
}
