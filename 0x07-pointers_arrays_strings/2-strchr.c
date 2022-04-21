#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * strchr - strchr
 * @c:  first occurrence of the character.
 * @s: string.
 * Return: null or s.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}
