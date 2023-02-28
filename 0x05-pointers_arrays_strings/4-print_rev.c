#include "main.h"
#include <string.h>
/**
 * print_rev - Reverses a string and prints it
 *
 * @s: The string
 *
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}
	for (rev -= 1; rev  >= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');

}
