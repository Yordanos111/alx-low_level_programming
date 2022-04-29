#include "main.h"
#include <stdio.h>
/**
 * get_endianness -  a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int s;
	char *end;

	s = 1;
	end = (char *)&s;
	return ((int)end[0]);
}
