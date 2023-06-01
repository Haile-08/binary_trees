#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - tree depth
 * @tree: pointer to the node to measure the depth
 * Description: measures the depth of a node in a
 * binary tree
 * Return: 0 If tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;
	binary_tree_t *node = NULL;

	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
		{
			d++;
			node = node->parent;
		}
	}
	return (d);
}
