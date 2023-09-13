#include "main.h"
/**
 * print_sign - Function determines number sign.
 * @n: This is the function parameter to be checked.
 * Return: 1 if positive, 0 if zero and - if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
			else
			{
			_putchar('-');
			return (-1);
			}
}
