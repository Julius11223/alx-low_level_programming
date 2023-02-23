#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: An input character
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int value = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			{
				value = 1;
			}
		}
	}
	return (value);
}

