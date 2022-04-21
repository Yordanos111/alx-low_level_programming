#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that calculate string length
 * @string: a string
 * Return: length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - function that concatenate s1 and n bytes of s2
 * @s1: a string
 * @s2: a string
 * @n: n bytes to concat from a string
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int numb, len, i, j;

	numb = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (numb < 0)
		return (NULL);
	if (numb >= _strlen(s2))
		numb = _strlen(s2);

	len = _strlen(s1) + numb + 1;

	a = malloc(sizeof(*a) * len);
	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; j < numb; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';

	return (a);
}
