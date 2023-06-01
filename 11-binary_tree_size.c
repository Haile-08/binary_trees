#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - tree size
 * @tree: pointer to the root node of the tree to measure
 * the size
 *
 * Discription: measures the size of a binary tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	binary_tree_t *node = NULL;

	size = size + 1;
	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
			node = node->parent;
		while (node != NULL)
		{
			size++;
			node = node->left;
		}
		while (node != NULL)
			node = node->parent;
		while (node != NULL)
                {
                        size++;
                        node = node->left;
                }
	}
	return (size);
}
