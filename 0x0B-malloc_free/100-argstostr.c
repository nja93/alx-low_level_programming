#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - function all the arguments
 * @ac: number of arguments
 * @av: array of pointers to argummnets
 * Return: NULL or pointer to a string
 *
 */

char *argstostr(int ac, char **av)
{
	int row, column, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		len = strlen(av[row]);
		total_len += len + 1;
	}

	str = (char *) malloc(total_len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (row = 0; row < ac; row++)
	{
		for (column = 0; av[row][column] != '\0'; column++)
		{
			str[len++] = av[row][column];
		}
		str[len++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
