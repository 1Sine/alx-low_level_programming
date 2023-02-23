#include "main.h"

/**
 * _isdigit - check if character is digit
 * @x: number to be checked
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
