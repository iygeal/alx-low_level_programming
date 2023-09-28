#include "main.h"
/**
 * _sqrt_recursion - Function that calculates natural squareroot of a number
 * @n: The number whose natural squareroot is to be calculated
 * @y: Sqr
 * Return: The squareroot or -1 if n has no natural squareroot
 */
int square(int n, int y);

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - Function used to obtain actual squareroot of n
 * @n: A given number
 * @y: Squareroot
 * Return: Returns squareroot
 */
int square(int n, int y)
{
	if ((y * y) == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	return (square(n, y + 1));

}
