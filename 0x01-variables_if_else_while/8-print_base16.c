#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Description - Numbers in lower case
 * main -Program that prints numbers in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char low;
	for (i = '0'; i <= '9'; i++);
	putchar(i);
	
	for (low = 'a'; low <= 'f'; low++);
	putchar(low);
	putchar('\n');
	
	return (0);
}
