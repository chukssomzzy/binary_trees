# include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: NULL or a pointer to uncle node
 *
 * Description: if node is `NULL`, return `NULL` if the node has no uncle node
 *					return `NULL`
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent ||
			!node->parent->parent->right || !(node->parent->parent->left))
		return (NULL);
	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
