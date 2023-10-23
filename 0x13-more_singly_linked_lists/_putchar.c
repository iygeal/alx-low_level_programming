#include "lists.h"
/**
 * _putchar - Function that prints char to stdout
 * @c: Char to be printed
 * Return: Returns c on success or-1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
