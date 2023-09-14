#include "main.h"
/**
 * print_triangle - Prints triangle shap with hash
 * @size: Size of triangle shape
 */
void print_triangle(int size)
{
	int a, i, j;

	a = 0;
	i = size - 1;
	while (a < size)
	{
		i = size - 1 - a;
		j = a + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		a++;
	}

	if (size <= 0)
		_putchar('\n');
}
