#include <stdio.h>
/**
  *array_iterator - function that executes function
  *@array: array of elements
  *@size: size of an array
  *@action: function pointer
  *Return: no argument
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
