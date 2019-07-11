#ifndef BINARY_H
#define BINARY_H

#include "ApplicationCpp.h"

typedef struct node_b
{
	int data;
	struct node_b *left;
	struct node_b *right;
} NBinary;

class Binary
{
public:
	/*
	 * Create a node
	 *
	 */
	NBinary *new_node(int data);

	/*
	 * Insert a value in a node in the binary tree
	 *
	 */
	NBinary *insert(NBinary *node, int data);

	/*
	 * Print all node in the binary tree
	 *
	 */
	void print_tree(NBinary *node);

	/*
	 * Invert the binary tree's node
	 *
	 */
	void mirror(NBinary *node);

	/*
	 * Search a node in a binary tree
	 *
	 */
	int search(NBinary *node, int target);
	
	/*
	 * Get size of the binary tree
	 *
 	 */
	int size(NBinary *node);

public:
	NBinary *root;

private:
	NBinary *current;
	
};

#endif // !BINARY_H