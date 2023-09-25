#include "main.h"
/**
 * _strchr - Function that locates a char in a string
 * @s: The string to search in
 * @c: The character
 * Return: returns pointer to the character location
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
