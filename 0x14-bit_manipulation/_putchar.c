#include "main.h"
/**
 * _putchar - Function that returns char to stdout
 * @c: Char to be returned
 * Return: 1 if success or -1 if failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
