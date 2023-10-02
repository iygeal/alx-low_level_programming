#include "main.h"
/**
 * _islower - Checks whether a character is lowercase
 * @c: Parameter for checking.
 * Return: 1 = success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
