# include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure it's depth
 *
 * Return: tree is NULL returns 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}