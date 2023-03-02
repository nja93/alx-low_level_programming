#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Destination
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{

		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (0);
}
