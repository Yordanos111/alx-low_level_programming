#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copies the string pointed to by src to buffer pointed to by dest
 * @dest: string
 * @src: srting
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
