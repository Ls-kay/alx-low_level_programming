#include "main.h"
/**
 * print_line - Draws a line in the terminal
 *
 * @n: The ASCII code
 *
 */

void print_line(int n)
{
	char p = 0;

	if (n > 0)
	{
		while (p <= n)
		{
			_putchar('_');
			p++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

	return (0);

}
