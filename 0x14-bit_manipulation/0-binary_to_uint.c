#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, length = 0;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		length++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		num += (b[i] - '0') * (1u << (--length));
	}

	return (num);
}
