#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(chhar *str)
{
	while (*str != '\0')
	{
		_Putchar(*str++);
	}
	_putchar('\n');
}
