#include "main.h"
/**
 * _putchar - Function that writes a char to stdout
 * @c: The char to be written to stdout
 * Return: Returns 1 on success or -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
