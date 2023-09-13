#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search-function that searches for a value
 * in a sorted array
 * of integers using the Binary search algorithm
 * @array: ptr to the first array to search in
 * @value: value to search for
 * @size: number of elements in array
 *   Return: Index of the element or -1 if array is Null or value not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
