#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @c: number to br computed
 * Return: absolute value of number or 0
 */

int _abs(int c)
{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
