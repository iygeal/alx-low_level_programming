#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: String for the job
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int length = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		length++;
	n = (length - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
