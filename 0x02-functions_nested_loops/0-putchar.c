#include <unistd.h>
#include "main.h"
/**
 * main- check description
 * description:it prints the word _putchar
 * Return: 0.
 */
int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
