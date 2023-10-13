#include "variadic_functions.h"
/**
 * print_all - Function that prints all types of arguments passed
 * @format: Data formats/types passed to be printed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *separator = "";
	va_list myFormats;

	va_start(myFormats, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(myFormats, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(myFormats, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(myFormats, double));
					break;
				case 's':
					str = va_arg(myFormats, char *);
					if (str == NULL)
						printf("%s(nil)", separator);
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		va_end(myFormats);
		printf("\n");
	}

}
