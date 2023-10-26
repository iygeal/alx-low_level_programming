#include "main.h"
/**
 * binary_to_uint  - Function that converts binary to unsigned int
 * @b: Pointer to char of binary numbers (0, 1)
 * Return: Returns the converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base10, i;

	if (b == NULL)
		return (0);
	for (base10 = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			base10 = (base10 << 1) | 1;
		else if (b[i] == '0')
			base10 <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (base10);
}

