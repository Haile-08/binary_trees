#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * leaf_counter - Counts the number of leaves in a binary tree.
 * @tree: The binary tree.
 * @n: A pointer to the tree's leaf count value.
 */
void leaf_counter(const binary_tree_t *tree, size_t *n)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (n != NULL)
				(*n)++;
		}
		else
		{
			leaf_counter(tree->left, n);
			leaf_counter(tree->right, n);
		}
	}
}

/**
 * binary_tree_leaves - tree leaves
 * @tree: pointer to the root node of the tree to count the
 * number of leaves
 * Description: counts the leaves in a binary tree
 * Return: 0 if tree is NULL and NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	leaf_counter(tree, &n);
	return (n);
}
