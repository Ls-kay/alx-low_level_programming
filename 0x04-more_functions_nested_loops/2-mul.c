#include "main.h"
#include <stdio.h>
/**
 * mul - multiplies integers together
 *
 * @a: The ASCII code
 * @b: The ASCII code
 i*
 * Return: Always 0 (success)
 */

int mul(int a, int b)
{
	int prod;

	scanf("%d %d", &a, &b);

	prod  = a * b;

	_putchar(prod);
	_putchar('\n');

	return (0);
}
