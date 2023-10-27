#include "main.h"
/**
 * get_endianness - Function that checks for endianness
 * Return: Void
 */
int get_endianness(void)
{
	int pc = 1;
	char *c;

	c = (char *)&pc;

	if (*c == 1)
	{
		return (1);
	}
	else if (*c == 0)
	{
		return (0);
	}
return (0);
}
