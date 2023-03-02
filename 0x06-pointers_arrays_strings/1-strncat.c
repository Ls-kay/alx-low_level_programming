#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - Concatinates strings
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

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
