#include "main.h"
/**
 * _strlen - Calculates string length
 * @s: String whose length is to be calclulated
 * Return: _strlen
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	return (length);
}
