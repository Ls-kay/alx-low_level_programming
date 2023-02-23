#include "main.h"
/**
 * main - A program that printss putchar
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
