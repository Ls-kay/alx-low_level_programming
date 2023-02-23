#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int f;

	for (i = 1; i <= 10; i++)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}

		_putchar('\n');
	}
}
