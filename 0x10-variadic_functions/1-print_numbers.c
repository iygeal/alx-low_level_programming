#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers
 * @separator: The string between numbers
 * @n: Number of passed integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myNumbers;

	va_start(myNumbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(myNumbers, int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(myNumbers);
	printf("\n");
}
