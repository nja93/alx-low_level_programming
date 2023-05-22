#include "main.h"

/**
 * _puts - function that puts
 * @str: parameter to _puts funtion
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
