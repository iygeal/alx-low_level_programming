#include "main.h"
/**
 * times_table - Function that works out times table.
 * Return:0
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (result < 10)
			{
				_putchar('0');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (a < 9)
			{
				_putchar('\n');
			}
		}
	}

}
