#include "variadic_functions.h"
/**
 * print_strings - Function that prints separated strings
 * @separator: Another string which separates the strings, all printed
 * @n: Number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myStrings;
	char *str;

	va_start(myStrings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(myStrings, char *);
		if (str != NULL)
			printf("%s", str);
		else if (str == NULL)
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(myStrings);
	printf("\n");
}
