#include "main.h"
/**
 * swap_int(int *a, int *b)-swaps the values of two integers
 * @a:int 1
 * @b:int 2
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
