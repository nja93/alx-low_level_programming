#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index starting from 0 to the bit you want to set
 * @n: pointer to an interger
 * Return: 1 if it worked, or -1 if an error occurred
 * by chege
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)

		return (-1);/*if not sucessful*/

	*n |= (1 << index);

	return (1);/*if successful*/
}
