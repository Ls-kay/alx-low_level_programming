#include "main.h"
/**
 * swap_int - Swaps integers
 *
 * @a: An integer
 *
 * @b: An integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
