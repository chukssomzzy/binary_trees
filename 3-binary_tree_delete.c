# include "binary_trees.h"
# include <stdlib.h>

/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Description: Delete a entire tree and do nothing if tree is a
 *					NULL pointer
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
