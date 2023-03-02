# include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root of the tree to count the number of nodes
 *
 * Return: if tree is NULL returns 0
 *
 * Description: NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes;

	if (!tree)
		return (0);
	num_nodes = (tree->left || tree->right) ? 1 + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right) : 0;
	return (num_nodes);
}
