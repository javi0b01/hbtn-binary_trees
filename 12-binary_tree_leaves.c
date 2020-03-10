#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0.  Otherwise 1.
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			leaf += 1;
		}
		if (tree->left)
		{
			leaf += binary_tree_leaves(tree->left);
		}
		if (tree->right)
		{
			leaf += binary_tree_leaves(tree->right);
		}
		return (leaf);
	}
}
