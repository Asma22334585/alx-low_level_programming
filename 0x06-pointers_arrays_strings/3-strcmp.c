#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: input 
 * @s2: input 
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int e =0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
