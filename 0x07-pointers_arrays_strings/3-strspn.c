#include "main.h"
/**
 * _strspn - Function that gets the length of prefix substring
 * @s: The string containing char to be checked
 * @accept: The substring to be iterated
 * Return: Length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, found;

	found = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				found++;
				break;
			}
		}
		if (accept[n] == '\0')
		{
			break;
		}
	}
	return (found);
}
