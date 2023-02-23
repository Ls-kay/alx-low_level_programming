#include "main.h"
/**
 * print_alphabet - A program that prints alphabet
 *
 * Return: Alwayss 0 (success)
 */
void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}

	_putchar('\n');
}
