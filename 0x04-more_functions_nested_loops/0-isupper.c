#include "main.h"
/**
 * _isupper - Finding uppercase letters
 *
 * @c: The ASCII code
 *
 * Return: 1 if letter is uppercase else return 0
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
