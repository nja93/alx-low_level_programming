#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 * by chege
 */

int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *)&i;

	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}
