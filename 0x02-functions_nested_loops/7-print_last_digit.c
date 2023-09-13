#include "main.h"
/**
 * print_last_digit - Prints the last digit
 *@a: Is the function value or parameter
*Return: z
*/
int print_last_digit(int a)
{
	int z;

	z = a % 10;

	if (a < 0)
		z = -z;
	_putchar(z + 48);
	return (z);
}
