#include "main.h"
#include <string.h>
/**
 * _strlen - Finding the length of a string
 *
 * @s: The string variable
 *
 * Return: the length of the string
 *
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
