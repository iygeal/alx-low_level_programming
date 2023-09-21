#include "main.h"
/**
 * string_toupper - Changes cases to upper
 * @n: String to be capitalized
 * Return: 0
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - ('a' - 'A');
		}
	}
	return (n);
}
