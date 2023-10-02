#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*main-  multiplies two numbers.
*@argc: int
*@argv: array
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
