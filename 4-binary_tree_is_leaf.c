#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - tree is leaf
 * @node: pointer to the node to check
 * Description:  checks if a node is a leaf
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (node != NULL)
		n = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	return (n);
}
