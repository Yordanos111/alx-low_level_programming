#include "main.h"

/**
 * _islower - checks for lowercase characte
 * @c: takes in characters
 * Return: 1 if lowercase and return 0 if not lowercae letter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
