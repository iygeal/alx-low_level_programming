#include "main.h"
/**
 * print_rev - Function that prints string in reverse
 * @s: The string to be reverse printed
 * Return: Void
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	for (i = length - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
