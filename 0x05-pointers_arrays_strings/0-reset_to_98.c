#include "main.h"
/**
 * reset_to_98 - Points to an integer and updates it to 98
 *
 * @*n: The ASCII code 
 *
 */

void reset_to_98(int *n)
{
	int p = &n;

	*n = 98;

	_putchar(n);
}
