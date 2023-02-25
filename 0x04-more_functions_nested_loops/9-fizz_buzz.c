#include <stdio.h>
/**
 * main - Prints fizzBuzz
 *
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			putchar('Fizz');
			continue;
		}
		else if (i % 5 == 0)
		{
			putchar('Buzz');
			continue;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			putchar('FizzBuzz');
		}
	}

}
