#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - function that searches for a value in an array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @size: size is the number of elements in array
 * Return: -1 if array is empty. first index where value is located else -1 if absent
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	
	/*check if array is empty*/
	if (array == NULL){
		return -1;
	}
	
	/*iterate through the array*/
	for (i=0; i < size; i++){
		if (array[i] == value){
			return i;
		}
	}
	return -1;
}
