#include "main.h"
/**
 * print_most_numbers - Prints most numbers except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);

		if (i == 2 &&  i == 4)
		{
			continue;
		}

	}

	_putchar('\n');

}
