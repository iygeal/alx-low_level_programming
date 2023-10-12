#include "variadic_functions.h"
/**
 * sum_them_all - This functions adds up all of its parameters
 * @n: Number of parameters
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list myNumbers;

	va_start(myNumbers, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = va_arg(myNumbers, unsigned int) + sum;
	}
	va_end(myNumbers);
	return (sum);

}
