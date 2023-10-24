#include "main.h"
/**
 * _memcpy() the function
 * @src - from which the function is copied
 * @dest - where the function is copied to
 * @n - number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
