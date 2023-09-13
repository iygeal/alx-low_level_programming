#include "main.h"
/**
 * times_table - Function that works out times table.
 * Return:0
 */
void times_table(void)
{
	int a, b, outcome;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			outcome = a * b;

			_putchar(outcome / 10 + '0');
			_putchar(outcome % 10 + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}

}
