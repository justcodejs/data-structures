#ifndef STACK_H
#define STACK_H

#define MAX 1000

#include "ApplicationCpp.h"
#include <vector>

class Stack
{
public:
	Stack();

	/*
	 * Print all item in the stack
	 *
	 */
	void get();

	/*
	 * Add an item in the stack
	 *
	 */
	void push(int x);

	/*
	 * Search an item in the list
	 *
	 */
	void search(int x);
	
	/*
	 * Delete an item in the stack by index
	 *
	 */
	void delete_by_index(int val);

	/*
	 * Destroy the stack
	 *
	 */
	void destroy_stack();

	/*
	 * Get item by index value
	 *
	 */
	int get_by_index(int index);

	/*
	 * Pop the top item in the stack
	 *
	 */
	int pop();

	/*
	 * Control if the stack is empy
	 *
	 */
	bool is_empty();

	/*
	 * Control if the stack is full
	 *
	 */
	bool is_full();

private:
	// Array to set the item
	int a[MAX];
	// Save the lenght of the array
	int lenght;

};

#endif // !STACK_H