#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to charactor
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ch = (char *)malloc(sizeof(char) * (i + 1));
	}
	if (ch == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ch[j] = str[j];
	}
	return (ch);
}
