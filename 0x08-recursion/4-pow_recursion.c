#include "main.h"
/**
 * _pow_recursion - Function which calculates power of a number
 * @x: The number to be used as base
 * @y: Exponent
 * Return: -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
