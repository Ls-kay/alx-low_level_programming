#include "main.h"
/**
 * rev_string - Reversing a string
 *
 * @s: The string
 *
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	while (s[i++])
	{
		len++;
	}

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
