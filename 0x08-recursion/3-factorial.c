#include "main.h"
/**
 * factorial - Function that literally calculates the factorial of a number
 * @n: The number whose factorial is to be calculated
 * Return: 1 if n = 0 or 1, -1 if n < 0, factorial if n > 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
