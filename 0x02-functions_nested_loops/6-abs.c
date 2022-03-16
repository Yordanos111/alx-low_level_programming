#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: takes an intiger (negative intiger)
 * Return: 1 if >0, 0 if == 0, positive if negative
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c* -1);
	}
	return (c);
}
