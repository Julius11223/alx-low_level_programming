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
	char small, e, q;

	e = 'e';
	q = 'q';

	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != e && small != q)
			putchar(small);
	}
	putchar('\n');

	return (0);
}

