#include "ApplicationCpp.h"
#include "List.h"
#include "Stack.h"
#include "Binary.h"

int main(int argc, char *argv[])
{
	List list;

	list.pop(&list.head); // Fix bug null value
	list.push(13, "Alessio", "Consolo");
	list.push(16, "Gabriele", "Lanzafame");
	list.push(16, "Francesco", "Lanzafame");
	list.push(14, "Giovanni", "Di Maggio");

	list.get();

	list.search(16, "Gabriele", "Lanzafame");

	return 0;
}
