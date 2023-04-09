#include "main.h"

/**
 * binary_to_uint - Funtion tha convertus a binary to unsigned int
 * @b: pointing a string of 0 and 1 chars
 * Return: the converted number, or 0
 * there is one or more chars in the string b that is not 0 or 1
 * by chege
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int decimal;

	if (b == NULL)
		return (0);

	for (decimal = 0; b[decimal] != '\0'; decimal++)
	{
		if (b[decimal] != '0' && b[decimal] != '1')
			return (0);

		converted <<= 1;
		if (b[decimal] == '1')
			converted = converted + 1;

	}
	return (converted);
}
