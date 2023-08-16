#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that points to two functions
 *
 * @name: name wanted to be printed
 * @f: pointer to the required function to be called
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
