#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenating two strings
 *
 * @dest: Container of a string
 *
 * @src: Container of a string
 *
 * Return: The result of the strings
 *
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
