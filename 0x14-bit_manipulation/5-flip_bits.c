#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to get from 1 num to another
 * @n: bit to be flipped
 * @m: other num *
 * not allowed to use the % or / operators
 * Return: no of bits
 * by chege
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_flip = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		num_flip += result & 1;
		result >>= 1;
	}
return (num_flip);
}

