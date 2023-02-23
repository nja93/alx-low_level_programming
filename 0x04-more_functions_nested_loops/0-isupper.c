#include "main.h"
/**
 * _isupper -Check if a letter is upper
 * @x: The numbber to be checked
 * Return: 1 for upper letter of 0 for any other
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
	return (1);
	}
	return (0);
}
