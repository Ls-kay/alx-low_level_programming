#include "main.h"
#include <stdio.h>
/**
 * mul - multiplies integers together
 *
 * @a, @b: The ASCII code
 *
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
