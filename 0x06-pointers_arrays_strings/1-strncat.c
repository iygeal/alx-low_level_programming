#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates strings max at nth character
 * @src: Source string
 * @dest: Destination string.
 * @n: Number of characters
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
		b = 0;
		while (src[b] != '\0' && n > 0)
		{
			n--;
			dest[a++] = src[b++];


		}
	dest[a] = '\0';
	return (dest);
}
