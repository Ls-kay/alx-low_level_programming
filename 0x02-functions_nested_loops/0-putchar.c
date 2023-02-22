#include <stdio.h>
#include <string.h>
/**
 * main - A program that printss putchar
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char ch[10] = "_putchar";

	for (size_t i = 0; i < strlen(ch); i++)
	{
		putchar(ch[i]);
		printf("\n");
	}

	return (0);
}
