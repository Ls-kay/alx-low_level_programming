#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - Concatinates strings
 *
 * @dest: Destination string
 *
 * @src: Source string
 *
 * @n: Max number of characters appended
 *
 * Return: Destination string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);

}
