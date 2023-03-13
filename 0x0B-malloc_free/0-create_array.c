#include "main.h"
#include <stdlib.h>

/**
*create_array -creates and array of characters and initializes
* @size: number of elements in an array
* @c: char
* Return:  pointer
*/

char *create_array(unsigned int size, char c)
{
	char  *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*values defined by malloc*/
buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		/*while loop for array*/
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
