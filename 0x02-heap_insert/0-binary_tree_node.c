#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node
 *         When created, a node does not have any children.
 * Return: a pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = malloc(sizeof(binary_tree_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->n = value;
	NewNode->parent = parent;

	return (NewNode);
}
