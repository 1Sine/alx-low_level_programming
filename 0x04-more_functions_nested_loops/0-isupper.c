#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @x: number to be checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
