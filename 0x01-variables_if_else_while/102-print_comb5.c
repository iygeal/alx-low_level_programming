#include <stdio.h>
/**
 * main - This program prints combination of double digit numbers
 * Return: 0 = success!
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98 || b != 99)
				{
				putchar(',');
				putchar(' ');
				}
			}			
		}
	}
	putchar('\n');
	return (0);
}
