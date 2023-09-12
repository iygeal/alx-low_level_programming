#include "main.h"
/**
 * main - A program that prints alphabets using user function.
 * Return: 0 = success
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ;  x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
