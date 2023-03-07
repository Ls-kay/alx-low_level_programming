#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 *
 * @s: Beginning of memory address to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
