#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the functions
 * @...: Avariable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");/* if one of the strings is NULL, (nil) is printed */
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
	/* if separator is NULL, it is  not printed */
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
