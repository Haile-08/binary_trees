#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * tree_height - height of a binary tree's node.
 * @tree: pointer to the root node of the tree to measure
 * @n: the accumlated height
 * @h: A pointer to the maximum height in the node's tree.d
 */
void tree_height(const binary_tree_t *tree, size_t n, size_t *h)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (n > *h)
				*h = n;
		}
		else
		{
			tree_height(tree->left, n + 1, h);
			tree_height(tree->right, n + 1, h);
		}
	}
}

/**
 * binary_tree_height - tree height
 * @tree: pointer to the root node of the tree to measure
 * the height
 * Description: measures the height of a binary tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	tree_height(tree, 0, &h);
	return (h);
}
