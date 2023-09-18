#include "main.h"
/**
 * _puts - Prints a string
 * @str: String to be printed
 * Return: 0 = success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
