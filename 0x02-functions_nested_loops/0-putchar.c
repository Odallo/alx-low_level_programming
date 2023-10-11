#include <unistd.h>
/**
 * main - A program to print without using printf
 *
 * Return: 0 (Success)
 */

int main(void)
{
char str[] = "_putchar\n";

write(1, str, sizeof(str) - 1);
return (0);
}

