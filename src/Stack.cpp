#include "Stack.h"

Stack::Stack()
{
	this->lenght = -1;
}

/*
 * Print all item in the stack
 *
 */
void Stack::get()
{
	for (int i = 0; i < this->lenght + 1; i++)
	{
		printf("[%d] -> %d\n", i, this->a[i]);
	}
}

/*
 * Add an item in the stack
 *
 */
void Stack::push(int x)
{
	if (this->lenght >= MAX - 1)
	{
		printf("Stack Overflow");
	}
	else
	{
		this->lenght += 1;
		this->a[this->lenght] = x;

		printf("%d pushed into stack\n", x);
	}
}

/*
 * Search an item in the list
 *
 */
void Stack::search(int x)
{
	for (int i = 0; i < this->lenght+1; i++)
	{
		if (x == this->a[i])
		{
			printf("Data found -> %d\nIndex: %d\n\n", this->a[i], i);
		}
	}
}

/*
 * Delete an item in the stack by index
 *
 */
void Stack::delete_by_index(int val)
{
	if (val >= this->lenght || val < 0)
	{
		printf("Error -> invalid index\n");
	}
	else
	{
		// Save all item in an vector
		std::vector<int> current(std::begin(this->a), std::end(this->a));
		// Delete item in the vector
		current.erase(current.begin() + val);

		// Save new item in the stack
		for (int i = 0; i < this->lenght; i++)
		{
			this->a[i] = current[i];
		}

		// Increment length of the stack because he removed an item
		this->lenght -= 1;
	}
}

/*
 * Destroy the stack
 *
 */
void Stack::destroy_stack()
{
	this->lenght = -1;
}

/*
 * Get item by index value
 *
 */
int Stack::get_by_index(int index)
{
	if (index >= this->lenght || index < 0)
	{
		printf("Error -> invalid index!\n");
	}
	else
	{
		return this->a[index];
	}
}

/*
 * Pop the top item in the stack
 *
 */
int Stack::pop()
{
	if (this->lenght < 0)
	{
		printf("Stack Underflow");
		return 0;
	}
	else
	{
		int x = this->a[this->lenght--];
		return x;
	}
}

/*
 * Control if the stack is empy
 *
 */
bool Stack::is_empty()
{
	if (this->lenght < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*
 * Control if the stack is full
 *
 */
bool Stack::is_full()
{
	if (this->lenght >= MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}