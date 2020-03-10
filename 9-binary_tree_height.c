#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: Height.  If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hgt_left = 0;
	size_t hgt_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left)
		{
			hgt_left = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			hgt_right = 1 + binary_tree_height(tree->right);
		}
		if (hgt_left > hgt_right)
		{
			return (hgt_left);
		}
		else
		{
			return (hgt_right);
		}
	}
}
