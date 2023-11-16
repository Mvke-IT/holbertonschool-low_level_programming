#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that connects function that needs 1 char
 * @m: is a pointer to function with a char
 * @name: name to print
 */

void print_name(char *name, void (*m)(char *))
{
	if (m != NULL && name != NULL)
	{
		m(name);
	}
}
