#include <unistd.h>
#include "main.h"
/**
 * _putchar - Function that writes character to stout
 * @c: The char to print
 * Return: 1 on success, -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
