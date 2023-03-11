#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check id there's digits in string
 * @str: array str
 *
 * Return: Always 0 (Success)
 */


int check_num(char *str)

{
	unsigned int count; /*variable declaration*/

	count = 0;
	while (count < strlen(str)) /*count string */

	{
	if (!isdigit(str[count])) /*check is str has digits*/
	{
	return (0);
	}

	count++;
}
return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count argument
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count; /*declaring variables*/
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*checks the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*atoi,converts str to int */
			sum = sum + str_to_int; /* also sum += str_to_int */
			}
			else
			{
				printf("Error\n");
				return (0);
			}
			count++;
		}
		printf("%d\n", sum);
	return (0);
}
