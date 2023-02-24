#include "main.h"
/**
 * print_line - Draws a line in the terminal
 *
 * @n: The ASCII code
 *
 */

void print_line(int n)
{
	char p = '_';

	if (n > 0)
	{
		_putchar(p * n);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
