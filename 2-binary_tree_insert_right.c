#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that
 * inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		right_node = binary_tree_node(parent, value);
		if (parent->right != NULL)
		{
			parent->right->parent = right_node;
			right_node->right = parent->right;
		}
		parent->right = right_node;
		return (right_node);
	}
}
