#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: stringi
 * @n: maximum number of characters to be appended
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
