#include "main.h"
/**
 * string_toupper - uppers a lower
 * @u: character to make upper
 * Return: return value of upper
 */

char *string_toupper(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if (u[i] >= 97 && u[i] <= 122)
		{
			u[i] -= 32;
		}
	}
	return (u);
}
