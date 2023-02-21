#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char small;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (small = 'a'; small <= 'f'; small++)
	{
		putchar(small);
	}
	putchar('\n');

	return (0);
}
