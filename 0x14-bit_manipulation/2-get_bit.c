#include "main.h"
/**
* get_bit - function that returns the value of a bit at a given index
* @n:  interger
* @index: position to be iterated across, starting at 0
* Return: value of  index or -1 incase of error
* by chege
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /*if index is valid*/
	{
		return (-1);
	}
	return ((n >> index) & 1); /*returns the valur of bit at this index*/
}
