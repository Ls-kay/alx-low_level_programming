#include <stdio.h>
/**
 * main - A program that prints the size of computers
 *
 * Return: Always 0 indicates success
 *
 */

int main(void)
{
	char charType;
	int intType;
	int longInt;
	int lLongInt;
	float floatType;


	printf("Size of a char:\n", sizeof(charType));
	printf("Size of an int:\n", sizeof(intType));
	printf("Size of a long int:\n", sizeof(longInt));
	printf("Size of a long long int:\n", sizeof(lLongInt));
	printf("Size of a float:\n", sizeof(floatType));

	return (0);
}
