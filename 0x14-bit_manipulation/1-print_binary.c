#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a numbe
 *@n: to be coverted ti binary
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 * Return: void
 * by chege
 */


void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0 && n == 0) /*if 0, binary rep is 0 */
	{
		_putchar('0');
		return;
	}
	if (n >> 1 != 0) /*check for more digits to print*/
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
