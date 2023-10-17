#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_rev - Prints a string in reverse order
*@s: String to reverse
*Return: Nothing
*/
void print_rev(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
