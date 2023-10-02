#include "main.h"
/**
 * _strncpy - Function that copies strings
 * @src: Source string
 * @dest: Destination string
 * @n: Number of characters
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *outcome = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
	return (outcome);
}
