#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, i;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;
	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", c[i]);
			break;
		}
		printf("%02hhx ", c[i]);
	}
	return (0);
}
