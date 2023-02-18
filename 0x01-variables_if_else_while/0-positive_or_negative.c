#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *
 * main - A program that makes choices
 *
 * Return - Always 0 indicates success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf(n, "%d is negative");
	}
	else
	{
		printf(n, "%d  is zero");
	}

	return (0);
}
