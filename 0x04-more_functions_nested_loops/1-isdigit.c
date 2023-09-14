#include "main.h"
/**
*_isdigit - Checks if c is digit
*@c: Parameter to be checked
*Return: 1 if success; 0 if not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
