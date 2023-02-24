#include "main.h"
/**
 * print_diagonal - A program that prints diagonally
 *
 * @n: The ASCII code
 *
 */

void print_diagonal(int n)
{
	char i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
