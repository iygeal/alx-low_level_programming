#include "main.h"
/**
 * times_table - Function that works out times table.
 * Return:0
 */
void times_table(void)
{
	int a, b, outcome;

	for (a = 0; a  < 10; a++)
	{
		for (b = 0; a < 10; b++)
		{
			outcome = b * a;
			if (b == 0)
			{
				_putchar(outcome + '0');
			}

			if (outcome < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(outcome + '0');
			} else if (outcome >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((outcome / 10) + '0');
				_putchar((outcome % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
