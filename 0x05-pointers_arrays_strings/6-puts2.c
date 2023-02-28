#include "main.h"
#include<stdio.h>
/**
 * puts2 - Prints every other character
 *
 * @str: The string
 *
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	for (i = 0; i < *str; i++)
	{
		if (str[j] != '\0')
		{
			j++;
		}
		else
		{
			_putchar(str[i]);
		}
	}
}
