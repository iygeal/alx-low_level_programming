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
		for (b = a; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}
	return (0);
}
