# include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent to the node to insert the left-child in
 * @value: the value of the node to insert
 *
 * Return: a pointer to the newly created node or null if the function fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
