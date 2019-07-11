#include "List.h"

List::List()
{
	this->head = (Node*)malloc(sizeof(Node));
	if (this->head == NULL)
	{
		printf("Error -> list not created!\n");
		exit(-1);
	}

	this->lenght = 0;
}

/**
 * Add item in the list
 *
 */
void List::push(int age, const char name[], const char surname[])
{
	this->current = (Node*)malloc(sizeof(Node));

	uint32_t x = 1 + rand() % 99999999;

	this->current->id = x;
	this->current->age = age;
	strcpy(this->current->name, name);
	strcpy(this->current->surname, surname);
	this->current->next = this->head;

	this->lenght += 1;
	this->head = this->current;
}

/**
 * Remove first item of the list
 *
 */
void List::get()
{
	this->current = this->head;

	while (this->current != NULL)
	{
		printf("Alunno:\nId: %u\nName: %s\nSurname: %s\nAge: %d\n----------------------\n", this->current->id, this->current->name, this->current->surname, this->current->age);
		this->current = this->current->next;
	}
}

/**
 * Remove last item added in the list
 *
 */
int List::pop(Node** head)
{
	int retval = -1;
    Node* next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->id;
    free(*head);
    *head = next_node;

    return retval;
}

/**
 * Get info of list
 *
 */
int List::remove_by_index(int index)
{
	int i = 0;
	int retdata = -1;
	this->current = this->head;
	Node* temp_node = NULL;

	if (index == 0)
	{
		return pop(&this->head);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (this->current->next == NULL)
		{
			return -1;
		}
		this->current = this->current->next;
	}

	temp_node = this->current->next;
	retdata = temp_node->id;
	this->current->next = temp_node->next;
	free(temp_node);

	return 0;
}

/**
 * Print all item of the list
 *
 */
void List::destroy()
{
	this->current = this->head;
	Node *next;

	while (current != NULL)
	{
		next = this->current->next;
		free(this->current);
		this->current = next;
	}

	this->lenght = 0;
	this->head = NULL;
}

/**
 * Destroy the list
 *
 */
void List::get_data()
{
	this->current = this->head;
	int n = 0;

	while (this->current->next != NULL)
	{
		if (this->current->id == this->current->next->id)
			n++;

		this->current = this->current->next;
	}

	printf("Info list:\n\nLenght list: %d\n", this->lenght);
}

/**
 * Search an alunn
 *
 */
int List::search(int age, const char  name[], const char surname[])
{
	int count = 0;
	this->current = this->head;

	printf("\n\nSearching...\n\n");

	while (this->current != NULL)
	{
		if (this->current->age == age && (!strcmp(this->current->name, name) || !strcmp(this->current->surname, surname)))
		{
			if (this->current->age == age && (!strcmp(this->current->name, name) && !strcmp(this->current->surname, surname)))
			{
				printf("Best result!\nName: %s\nSurname: %s\nAge: %d\n-------------------\n", this->current->name, this->current->surname, this->current->age);
				count++;
			}
			else
			{
				printf("Name: %s\nSurname: %s\nAge: %d\n-------------------\n", this->current->name, this->current->surname, this->current->age);
				count++;
			}
		}

		this->current = this->current->next;
	}
	
	printf("\nResult found: %d\n", count);
	return 0;
}