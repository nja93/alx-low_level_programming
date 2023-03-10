#include "main.h"

/**
 * * _islower -> checks if the character is lowercase
 * * @c: this is a character argument
 * * Return: returns 1 for lowercase characters and 0 for anything else
 * */
int _islower(int c)
{

		if (c >= 97 && c <= 122)
				{
						return (1);
							}
			return (0);
}
