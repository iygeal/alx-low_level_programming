#include "main.h"
/**
 * _memset - Function that fills string with character
 * @s: The string to be filled
 * @n: Number of bytes (characters) to be filled in s
 * @b: The actual character to be filled in s
 * Return: s - string s is to be returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
