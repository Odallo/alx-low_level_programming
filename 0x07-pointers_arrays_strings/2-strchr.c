#include "main.h"
/**
 * _strchr - main function
 *@c - Function parameter
 *@s - Function parameter
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

