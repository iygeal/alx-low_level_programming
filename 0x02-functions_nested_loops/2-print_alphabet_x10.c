#include "main.h"
/**
 *  print_alphabet_x10 - Program that prints alphabets 10 times
 *  Return: 0 = success
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0 ; b <= 9 ; b++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
