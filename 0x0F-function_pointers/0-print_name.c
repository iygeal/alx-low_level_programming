#include "function_pointers.h"
/**
 * print_name - Function that prints name
 * @name: The pointer to the name
 * @f: Function pointer that holds the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
