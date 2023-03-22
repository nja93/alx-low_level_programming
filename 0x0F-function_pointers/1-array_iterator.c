#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to the function
 * Return : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{	action(array[i]);
	}
}
