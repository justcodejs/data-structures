#ifndef LIST_H
#define LIST_H

#include "ApplicationCpp.h"

typedef struct node
{
	uint32_t id;
	int age;
	char name[250];
	char surname[250];
	struct node* next;
} Node;

class List
{
public:
	List();

	/**
	 * Add item in the list
	 *
	 */
	void push(int age, const char name[], const char surname[]);

	/**
	 * Remove first item of the list
	 *
	 */
	int pop(Node** head);

	/**
	 * Remove an item of the list by yours index
	 *
	 */
	int remove_by_index(int index);
	
	/**
	 * Get info of list
	 *
	 */
	void get_data();

	/**
	 * Print all item of the list
	 *
	 */
	void get();
	
	/**
	 * Destroy the list
	 *
	 */
	void destroy();

	/**
	 * Search an alunn
	 *
	 */
	int search(int age, const char name[], const char surname[]);

public:
	// Lenght of list
	int lenght;

	// Root list
	Node *head;

private:
	// For exchange nodes
	Node *current;

};

#endif // !LIST_H
