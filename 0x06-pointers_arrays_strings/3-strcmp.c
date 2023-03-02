#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncmp - Concatinates strings
 *
 * @s1: Destination string
 *
 * @s2: Source string
 *
 * @n: Max number of characters appended
 *
 * Return: Destination string
 *
 */

char *_strncmp(char *s1, char *s2)
{
	int n;

	value = strncmp(s1, s2, n);

	if (value == 0)
	{
		puts("%s is same as %s", s1, s2);
	}
	else if (value > 0)
	{
		puts("%s is greater than %s", s1, s2);
	}
	else
	{
		puts("%s is less than %s", s1, s2);
	}
	
	return (0);
}
