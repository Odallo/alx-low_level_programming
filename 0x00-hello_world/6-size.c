#include <stdio.h>
/**
 * main - A program to print all input types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %lu", sizeof(a));
	printf("Size of int: %lu", sizeof(b));
	printf("Size of long int: %lu", sizeof(c));
	printf("Size of long long int: %lu", sizeof(d));
	printf("Size of float: %lu", sizeof(e));
	return (0);
}
