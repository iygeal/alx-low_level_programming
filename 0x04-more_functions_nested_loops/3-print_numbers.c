#include "main.h"
/**
 * print_numbers - Function that prints numbers
 * Return: 0 = success
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i + 48);
	_putchar('\n');
}
