#include "main.h"
/**
 * _strpbrk - This function locates the first occurrence in a string
 * @s: Base string
 * @accept: Target string
 * Return: a Pointer if match found or NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
