#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main- the minimum number of coins
*to make change for an amount of money
*@argc: int
*@argv: array
*Return: 0(success)
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, x = 0, y = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (y >= cents[i])
			{
				x += y / cents[i];
				y = y % cents[i];
				if (y % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
