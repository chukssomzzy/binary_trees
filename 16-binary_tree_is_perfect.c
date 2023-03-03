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
