#include "main.h"
/**
 * _isupper - Checks if character is upper case
 * @c: Character of function to be checked
 * Return: 1 if success; 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
