#include "Binary.h"

/*
 * Create a node
 *
 */
NBinary* Binary::new_node(int data)
{
	this->current = (NBinary*)malloc(sizeof(NBinary));
	this->current->data = data;
	this->current->left = NULL;
	this->current->right = NULL;

	return this->current;
}

/*
 * Insert a node in the binary tree
 *
 */
NBinary* Binary::insert(NBinary *node, int data)
{
	// 1. If the tree is empty, return a new, single node
	if (node == NULL)
	{
		return new_node(data);
	}
	else
	{
		// 2. Otherwise, recur down the tree
		if (data <= node->data)
			node->left = insert(node->left, data);
		else
			node->right = insert(node->right, data);
		return node;
	}
}

/*
 * Print all node in the binary tree
 *
 */
void Binary::print_tree(NBinary *node)
{
	if (node == NULL)
		return;
	
	print_tree(node->left);
	printf("%d\n", node->data);
	print_tree(node->right);
}

/*
 * Invert the binary tree's node
 *
 */
void Binary::mirror(NBinary *node)
{
	if (node==NULL)
	{
		return;
	}
	else
	{
		NBinary *temp;

		// Do the subtrees
		mirror(node->left);
		mirror(node->right);
		
		// Swap the pointers in this node
		temp = node->left;
		node->left = node->right;
		node->right = temp;
	}
}

/*
 * Search a node in a binary tree
 *
 */
int Binary::search(NBinary *node, int target)
{
	// 1. Base case == empty tree
	// in that case, the target is not found so return false
	if (node == NULL)
	{
		return false;
	}
	else
	{
		// 2. see if found here
		if (target == node->data)
		{
			return true;
		}
		else
		{
			// 3. otherwise recur down the correct subtree
			if (target < node->data)
				return(search(node->left, target));
			else
				return(search(node->right, target));
		}
	}
}

/*
 * Get size of the binary tree
 *
 */
int Binary::size(NBinary *node) {
	if (node==NULL)
		return 0;
	else
		return(size(node->left) + 1 + size(node->right));
}
