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
	/*_putchar("_")
	_putchar("p");
	_putchar("u");
	_putchar("t");
	_putchar("c");
	_putchar("h");
	_putchar("a");
	_putchar("r");*/
	_putchar('\n');

	return (0);
}
