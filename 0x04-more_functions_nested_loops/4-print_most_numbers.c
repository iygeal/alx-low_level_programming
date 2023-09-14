#include "main.h"
/**
 * print_most_numbers - Function that prints most numbers
 * Return: 0 is success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i != 2 || i != 4)
			_putchar(i + 48);
	}
	_putchar('\n');
}
