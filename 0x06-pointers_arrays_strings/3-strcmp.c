#include "main.h"
/**
 * _strcmp - Compare strings
 *
 * @s1: string
 *
 * @s2: string
 *
 * Return: result
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] - s2[i] == 0) && (s1[i] != '\0'))
		i++;

	return (s1[i] - s2[i]);
}
