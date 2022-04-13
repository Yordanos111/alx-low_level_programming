#include <stdio.h>
#include <stdlib.h>
/**
 * main - function entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int con, byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (con = 0; con < (byte - 1); con++)
	{
		if (byte != 0)
			printf("%02hhx ", ((char *)main)[con]);
	}
	printf("%02hhx\n", ((char *)main)[con]);
	return (0);
}
