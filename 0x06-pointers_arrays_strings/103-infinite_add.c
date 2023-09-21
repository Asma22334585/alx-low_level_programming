#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: result
 * @size_r: size of result
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int l = 0;
	int c = 0;
	int h, a, b;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (h = l - 1; h >= 0; h--)
	{
		i--;
		j--;
		if (i >= 0)
			a = n1[i] - 48;
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - 48;
		else
			b = 0;
		r[h] = (a + b + c) % 10 + 48;
		c = (a + b + c) / 10;
	}
	if (c == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = c + 48;
	}
	return (r);
}
