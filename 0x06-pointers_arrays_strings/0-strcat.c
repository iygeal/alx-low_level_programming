#include "main.h"
/**
 * _strcat - String Concatenator
 * @dest: Destination string
 * @src: Source string
 * Return: destlen
 */
char *_strcat(char *dest, char *src)
{
	char *destlen = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (destlen);
}
